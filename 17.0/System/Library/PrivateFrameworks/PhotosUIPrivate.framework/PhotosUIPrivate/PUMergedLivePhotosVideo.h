@class NSArray, AVAsset, AVVideoComposition;

@interface PUMergedLivePhotosVideo : NSObject

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSArray *startTimes;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (readonly, nonatomic) AVAsset *mergedVideoAsset;
@property (readonly, nonatomic) AVVideoComposition *mergedVideoComposition;
@property (readonly, nonatomic) double videoAspectRatio;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)debugDescription;
- (long long)_assetIndexAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)assetAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 progress:(out double *)a1;
- (id)initWithAssets:(id)a0 startTimes:(id)a1 keyTimes:(id)a2 videoAsset:(id)a3 videoComposition:(id)a4 videoAspectRatio:(double)a5 options:(unsigned long long)a6;

@end
