@interface SNAudioMultiArrayUtils : NSObject

+ (id)indexOfBatchDimensionFromCount:(long long)a0;
+ (BOOL)checkDimensionCountIsSupported:(long long)a0;
+ (id)indexOfFrameDimensionFromCount:(long long)a0;
+ (id)batchCountFromShape:(id)a0;
+ (id)channelCountFromShape:(id)a0;
+ (id)frameCountFromShape:(id)a0;
+ (id)indexOfChannelDimensionFromCount:(long long)a0;
+ (id)reshapeAudioMultiArrayToBatchChannelFrameForm:(id)a0 error:(id *)a1;
+ (id)shapeWithFrameCount:(long long)a0 channelCount:(long long)a1 batchCount:(long long)a2;
+ (BOOL)validateDimensionCountIsSupported:(long long)a0 error:(id *)a1;

- (id)init;

@end
