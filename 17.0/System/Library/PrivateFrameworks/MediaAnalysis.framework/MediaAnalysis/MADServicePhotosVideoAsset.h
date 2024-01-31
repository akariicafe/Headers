@class PHAsset, NSArray;

@interface MADServicePhotosVideoAsset : MADServiceVideoAsset {
    PHAsset *_photosAsset;
    NSArray *_resources;
}

- (id)resources;
- (id)identifier;
- (void).cxx_destruct;
- (id)url;
- (unsigned long long)assetType;
- (id)isSensitive;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })trimTimeRange;
- (id)scoresForLabels;
- (id)animatedStickerScore;
- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stillTime;

@end
