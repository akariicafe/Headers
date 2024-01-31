@interface PXAssetBadgeManager : NSObject

@property (class, readonly) PXAssetBadgeManager *defaultManager;

- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })badgeInfoForAsset:(id)a0 inCollection:(id)a1 options:(unsigned long long)a2;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })badgeInfoForCollection:(id)a0 options:(unsigned long long)a1;

@end
