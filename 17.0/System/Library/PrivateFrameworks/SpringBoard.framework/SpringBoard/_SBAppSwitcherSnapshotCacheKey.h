@class SBDisplayItem, SBAppLayout;

@interface _SBAppSwitcherSnapshotCacheKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (unsigned long long)hash;
- (id)initWithDisplayItem:(id)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
