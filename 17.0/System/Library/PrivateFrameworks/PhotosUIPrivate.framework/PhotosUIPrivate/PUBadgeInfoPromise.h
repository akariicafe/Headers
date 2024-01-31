@interface PUBadgeInfoPromise : NSObject <NSCopying> {
    id /* block */ _countProvider;
}

@property (readonly, nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } badgeInfo;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)a0;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 countProvider:(id /* block */)a1;

@end
