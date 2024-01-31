@interface PLCacheEntry : NSObject {
    id _object;
    struct lruEntry { id x0; long long x1; struct { struct lruEntry *x0; struct lruEntry **x1; } x2; } *_entry;
}

- (void)dealloc;
- (id)object;
- (void)setObject:(id)a0;
- (struct lruEntry { id x0; long long x1; struct { struct lruEntry *x0; struct lruEntry **x1; } x2; } *)lruListEntry;

@end
