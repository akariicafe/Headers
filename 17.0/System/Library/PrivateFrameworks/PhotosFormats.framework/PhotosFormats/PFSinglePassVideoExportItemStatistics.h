@class NSMutableArray;

@interface PFSinglePassVideoExportItemStatistics : NSObject

@property unsigned long long lastOutputChunkTimestamp;
@property (retain) NSMutableArray *outputChunkMeasurements;
@property unsigned long long processedOutputTotalBytes;
@property unsigned long long processedVideoSampleBytes;
@property unsigned long long processedAdditionalSampleBytes;
@property double conversionDuration;
@property (readonly) unsigned long long processedOutputBytesPerSecond;
@property (readonly) double averageOutputChunkTimeInterval;
@property (readonly) unsigned long long averageOutputChunkBytes;
@property (readonly) float processingFramesPerSecond;
@property double lastProcessedInputFramePresentationTime;
@property long long processedOutputFrameCount;
@property (readonly) long long effectiveEncodingBitRate;
@property unsigned long long targetOutputTotalBytes;
@property double targetPlaybackDuration;
@property float frameRate;
@property (readonly) long long targetEncodingBitRate;

+ (id)statisticsWithTargetPlaybackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 frameRate:(float)a1 targetOutputTotalBytes:(unsigned long long)a2;

- (id)summaryDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addMeasurementForBytesDelivered:(unsigned long long)a0;
- (void)enumerateOutputChunkMeasurementsWithHandler:(id /* block */)a0;
- (id)outputChunkMeasurementsDescription;

@end
