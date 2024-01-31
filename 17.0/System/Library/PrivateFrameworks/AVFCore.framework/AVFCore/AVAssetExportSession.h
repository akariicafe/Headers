@class NSString, AVAsset, NSURL, NSError, AVAssetExportSessionInternal;

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal *_exportSession;
}

@property (readonly, nonatomic) NSString *presetName;
@property (readonly, retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *outputFileType;
@property (copy, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (nonatomic) BOOL allowsParallelizedExport;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) float progress;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForPreset:(id)a0 properties:(id)a1;
+ (id)allExportPresets;
+ (void)determineCompatibilityOfExportPreset:(id)a0 withAsset:(id)a1 outputFileType:(id)a2 completionHandler:(id /* block */)a3;
+ (long long)estimatedOutputFileLengthForPreset:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 properties:(id)a2;
+ (id)exportPresetsCompatibleWithAsset:(id)a0;
+ (id)exportSessionWithAsset:(id)a0 presetName:(id)a1;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;

- (id)init;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void)dealloc;
- (id)audioMix;
- (id)supportedFileTypes;
- (id)audioTimePitchAlgorithm;
- (void)setMetadata:(id)a0;
- (id)directoryForTemporaryFiles;
- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (void)setAudioMix:(id)a0;
- (BOOL)isDefunct;
- (id)description;
- (void)setDirectoryForTemporaryFiles:(id)a0;
- (BOOL)maximizePowerEfficiency;
- (id)metadata;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setAudioTimePitchAlgorithm:(id)a0;
- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
- (long long)fileLengthLimit;
- (BOOL)allowsAppleOnlySWAV1Decode;
- (unsigned long long)audioTrackGroupHandling;
- (BOOL)canPerformMultiplePassesOverSourceMediaData;
- (void)cancelExport;
- (id)customVideoCompositor;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id /* block */)a0;
- (void)estimateMaximumDurationWithCompletionHandler:(id /* block */)a0;
- (void)estimateOutputFileLengthWithCompletionHandler:(id /* block */)a0;
- (long long)estimatedOutputFileLength;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (id)initWithAsset:(id)a0 presetName:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxDuration;
- (id)metadataItemFilter;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minVideoFrameDuration;
- (BOOL)preserveSyncFrames;
- (void)setAllowsAppleOnlySWAV1Decode:(BOOL)a0;
- (void)setAudioTrackGroupHandling:(unsigned long long)a0;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)a0;
- (void)setFileLengthLimit:(long long)a0;
- (void)setMetadataItemFilter:(id)a0;
- (void)setMinVideoFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPreserveSyncFrames:(BOOL)a0;
- (void)setVideoComposition:(id)a0;
- (void)setVideoFrameRateConversionAlgorithm:(id)a0;
- (id)videoComposition;
- (id)videoFrameRateConversionAlgorithm;

@end
