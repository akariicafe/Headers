@class AVTimedMetadataGroup;

@interface SampleBufferAndMetadata : NSObject

@property struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (retain) AVTimedMetadataGroup *metadata;

- (void).cxx_destruct;

@end
