/*
 * File is generated by scripts/block-coroutine-wrapper.py
 *
 * Copyright (c) 2020 Virtuozzo International GmbH.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "qemu/osdep.h"
#include "block/coroutines.h"
#include "block/block-gen.h"
#include "block/block_int.h"


/*
 * Wrappers for bdrv_co_truncate
 */

typedef struct BdrvCoTruncate {
    BdrvPollCo poll_state;
    BdrvChild *child;
    int64_t offset;
    bool exact;
    PreallocMode prealloc;
    BdrvRequestFlags flags;
    Error **errp;
} BdrvCoTruncate;

static void coroutine_fn bdrv_co_truncate_entry(void *opaque)
{
    BdrvCoTruncate *s = opaque;

    s->poll_state.ret = bdrv_co_truncate(s->child, s->offset, s->exact, s->prealloc, s->flags, s->errp);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_truncate(BdrvChild *child, int64_t offset, bool exact, PreallocMode prealloc, BdrvRequestFlags flags, Error **errp)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_truncate(child, offset, exact, prealloc, flags, errp);
    } else {
        BdrvCoTruncate s = {
            .poll_state.bs = child->bs,
            .poll_state.in_progress = true,

            .child = child,
            .offset = offset,
            .exact = exact,
            .prealloc = prealloc,
            .flags = flags,
            .errp = errp,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_truncate_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_check
 */

typedef struct BdrvCoCheck {
    BdrvPollCo poll_state;
    BlockDriverState *bs;
    BdrvCheckResult *res;
    BdrvCheckMode fix;
} BdrvCoCheck;

static void coroutine_fn bdrv_co_check_entry(void *opaque)
{
    BdrvCoCheck *s = opaque;

    s->poll_state.ret = bdrv_co_check(s->bs, s->res, s->fix);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_check(BlockDriverState *bs, BdrvCheckResult *res, BdrvCheckMode fix)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_check(bs, res, fix);
    } else {
        BdrvCoCheck s = {
            .poll_state.bs = bs,
            .poll_state.in_progress = true,

            .bs = bs,
            .res = res,
            .fix = fix,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_check_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_invalidate_cache
 */

typedef struct BdrvCoInvalidateCache {
    BdrvPollCo poll_state;
    BlockDriverState *bs;
    Error **errp;
} BdrvCoInvalidateCache;

static void coroutine_fn bdrv_co_invalidate_cache_entry(void *opaque)
{
    BdrvCoInvalidateCache *s = opaque;

    s->poll_state.ret = bdrv_co_invalidate_cache(s->bs, s->errp);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_invalidate_cache(BlockDriverState *bs, Error **errp)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_invalidate_cache(bs, errp);
    } else {
        BdrvCoInvalidateCache s = {
            .poll_state.bs = bs,
            .poll_state.in_progress = true,

            .bs = bs,
            .errp = errp,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_invalidate_cache_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_flush
 */

typedef struct BdrvCoFlush {
    BdrvPollCo poll_state;
    BlockDriverState *bs;
} BdrvCoFlush;

static void coroutine_fn bdrv_co_flush_entry(void *opaque)
{
    BdrvCoFlush *s = opaque;

    s->poll_state.ret = bdrv_co_flush(s->bs);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_flush(BlockDriverState *bs)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_flush(bs);
    } else {
        BdrvCoFlush s = {
            .poll_state.bs = bs,
            .poll_state.in_progress = true,

            .bs = bs,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_flush_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_pdiscard
 */

typedef struct BdrvCoPdiscard {
    BdrvPollCo poll_state;
    BdrvChild *child;
    int64_t offset;
    int64_t bytes;
} BdrvCoPdiscard;

static void coroutine_fn bdrv_co_pdiscard_entry(void *opaque)
{
    BdrvCoPdiscard *s = opaque;

    s->poll_state.ret = bdrv_co_pdiscard(s->child, s->offset, s->bytes);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_pdiscard(BdrvChild *child, int64_t offset, int64_t bytes)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_pdiscard(child, offset, bytes);
    } else {
        BdrvCoPdiscard s = {
            .poll_state.bs = child->bs,
            .poll_state.in_progress = true,

            .child = child,
            .offset = offset,
            .bytes = bytes,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_pdiscard_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_readv_vmstate
 */

typedef struct BdrvCoReadvVmstate {
    BdrvPollCo poll_state;
    BlockDriverState *bs;
    QEMUIOVector *qiov;
    int64_t pos;
} BdrvCoReadvVmstate;

static void coroutine_fn bdrv_co_readv_vmstate_entry(void *opaque)
{
    BdrvCoReadvVmstate *s = opaque;

    s->poll_state.ret = bdrv_co_readv_vmstate(s->bs, s->qiov, s->pos);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_readv_vmstate(BlockDriverState *bs, QEMUIOVector *qiov, int64_t pos)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_readv_vmstate(bs, qiov, pos);
    } else {
        BdrvCoReadvVmstate s = {
            .poll_state.bs = bs,
            .poll_state.in_progress = true,

            .bs = bs,
            .qiov = qiov,
            .pos = pos,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_readv_vmstate_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_writev_vmstate
 */

typedef struct BdrvCoWritevVmstate {
    BdrvPollCo poll_state;
    BlockDriverState *bs;
    QEMUIOVector *qiov;
    int64_t pos;
} BdrvCoWritevVmstate;

static void coroutine_fn bdrv_co_writev_vmstate_entry(void *opaque)
{
    BdrvCoWritevVmstate *s = opaque;

    s->poll_state.ret = bdrv_co_writev_vmstate(s->bs, s->qiov, s->pos);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_writev_vmstate(BlockDriverState *bs, QEMUIOVector *qiov, int64_t pos)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_writev_vmstate(bs, qiov, pos);
    } else {
        BdrvCoWritevVmstate s = {
            .poll_state.bs = bs,
            .poll_state.in_progress = true,

            .bs = bs,
            .qiov = qiov,
            .pos = pos,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_writev_vmstate_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}



/*
 * Wrappers for bdrv_co_preadv
 */

typedef struct BdrvCoPreadv {
    BdrvPollCo poll_state;
    BdrvChild *child;
    int64_t offset;
    unsigned int bytes;
    QEMUIOVector *qiov;
    BdrvRequestFlags flags;
} BdrvCoPreadv;

static void coroutine_fn bdrv_co_preadv_entry(void *opaque)
{
    BdrvCoPreadv *s = opaque;

    s->poll_state.ret = bdrv_co_preadv(s->child, s->offset, s->bytes, s->qiov, s->flags);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_preadv(BdrvChild *child, int64_t offset, unsigned int bytes, QEMUIOVector *qiov, BdrvRequestFlags flags)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_preadv(child, offset, bytes, qiov, flags);
    } else {
        BdrvCoPreadv s = {
            .poll_state.bs = child->bs,
            .poll_state.in_progress = true,

            .child = child,
            .offset = offset,
            .bytes = bytes,
            .qiov = qiov,
            .flags = flags,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_preadv_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_pwritev
 */

typedef struct BdrvCoPwritev {
    BdrvPollCo poll_state;
    BdrvChild *child;
    int64_t offset;
    unsigned int bytes;
    QEMUIOVector *qiov;
    BdrvRequestFlags flags;
} BdrvCoPwritev;

static void coroutine_fn bdrv_co_pwritev_entry(void *opaque)
{
    BdrvCoPwritev *s = opaque;

    s->poll_state.ret = bdrv_co_pwritev(s->child, s->offset, s->bytes, s->qiov, s->flags);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_pwritev(BdrvChild *child, int64_t offset, unsigned int bytes, QEMUIOVector *qiov, BdrvRequestFlags flags)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_pwritev(child, offset, bytes, qiov, flags);
    } else {
        BdrvCoPwritev s = {
            .poll_state.bs = child->bs,
            .poll_state.in_progress = true,

            .child = child,
            .offset = offset,
            .bytes = bytes,
            .qiov = qiov,
            .flags = flags,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_pwritev_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}


/*
 * Wrappers for bdrv_co_common_block_status_above
 */

typedef struct BdrvCoCommonBlockStatusAbove {
    BdrvPollCo poll_state;
    BlockDriverState *bs;
    BlockDriverState *base;
    bool include_base;
    bool want_zero;
    int64_t offset;
    int64_t bytes;
    int64_t *pnum;
    int64_t *map;
    BlockDriverState **file;
    int *depth;
} BdrvCoCommonBlockStatusAbove;

static void coroutine_fn bdrv_co_common_block_status_above_entry(void *opaque)
{
    BdrvCoCommonBlockStatusAbove *s = opaque;

    s->poll_state.ret = bdrv_co_common_block_status_above(s->bs, s->base, s->include_base, s->want_zero, s->offset, s->bytes, s->pnum, s->map, s->file, s->depth);
    s->poll_state.in_progress = false;

    aio_wait_kick();
}

int bdrv_common_block_status_above(BlockDriverState *bs, BlockDriverState *base, bool include_base, bool want_zero, int64_t offset, int64_t bytes, int64_t *pnum, int64_t *map, BlockDriverState **file, int *depth)
{
    if (qemu_in_coroutine()) {
        return bdrv_co_common_block_status_above(bs, base, include_base, want_zero, offset, bytes, pnum, map, file, depth);
    } else {
        BdrvCoCommonBlockStatusAbove s = {
            .poll_state.bs = bs,
            .poll_state.in_progress = true,

            .bs = bs,
            .base = base,
            .include_base = include_base,
            .want_zero = want_zero,
            .offset = offset,
            .bytes = bytes,
            .pnum = pnum,
            .map = map,
            .file = file,
            .depth = depth,
        };

        s.poll_state.co = qemu_coroutine_create(bdrv_co_common_block_status_above_entry, &s);

        return bdrv_poll_co(&s.poll_state);
    }
}
