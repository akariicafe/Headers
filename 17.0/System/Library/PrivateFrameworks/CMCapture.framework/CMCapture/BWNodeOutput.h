@class BWNodeConnection, BWFormat, BWMemoryPool, NSMutableDictionary, BWPixelBufferPool, BWDataBufferPool, NSMutableArray, BWFormatRequirements, NSString, BWPointCloudFormat, BWNodeOutputMediaProperties, BWVideoFormat, NSArray, BWNodeOutputMediaConfiguration, BWNode;
@protocol BWNodeOutputConsumer;

@interface BWNodeOutput : NSObject {
    id<BWNodeOutputConsumer> _consumer;
    BOOL _consumerIsANodeConnection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastValidPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    struct OpaqueFigSimpleMutex { } *_poolPreallocationMutex;
    NSMutableArray *_poolPreallocationCompletionHandlers;
    BOOL _poolPreallocationDone;
    BOOL _receivedEOD;
    NSMutableDictionary *_attachedMediaConfigurations;
    NSMutableDictionary *_attachedMediaProperties;
}

@property (copy, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) BOOL providesPixelBufferPool;
@property (nonatomic) BOOL providesDataBufferPool;
@property (nonatomic) BOOL pixelBufferPoolProvidesBackPressure;
@property (readonly, nonatomic) BWPixelBufferPool *preparedPixelBufferPool;
@property (readonly, nonatomic) BWDataBufferPool *preparedDataBufferPool;
@property (nonatomic) int passthroughMode;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int owningNodeRetainedBufferCount;
@property (copy, nonatomic) BWFormat *format;
@property (readonly, nonatomic) BWVideoFormat *videoFormat;
@property (readonly, nonatomic) BWPointCloudFormat *pointCloudFormat;
@property (readonly, nonatomic) BWFormat *liveFormat;
@property (readonly, nonatomic) BWPixelBufferPool *livePixelBufferPool;
@property (readonly, nonatomic) BWDataBufferPool *liveDataBufferPool;
@property (readonly, nonatomic) BOOL mediaTypeIsVideo;
@property (readonly, nonatomic) BOOL mediaTypeIsPointCloud;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int mediaType;
@property (readonly, nonatomic) BWNode *node;
@property (nonatomic) id<BWNodeOutputConsumer> consumer;
@property (readonly, nonatomic) BWNodeConnection *connection;
@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) BWNodeOutputMediaConfiguration *primaryMediaConfiguration;
@property (readonly, nonatomic) NSArray *specifiedAttachedMediaKeys;
@property (retain, nonatomic) BWNodeOutputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (readonly, nonatomic) BWNodeOutputMediaProperties *primaryMediaProperties;
@property (readonly, nonatomic) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) float maxSampleDataOutputRate;
@property (nonatomic) BOOL dropsSampleBuffersWithUnexpectedPTS;
@property (readonly, nonatomic) long long liveConfigurationID;
@property (nonatomic) BOOL discardsSampleData;
@property (nonatomic) BOOL poolPreallocationEnabled;
@property (readonly, nonatomic) unsigned int numberOfBuffersEmitted;
@property (readonly, nonatomic) unsigned int numberOfBuffersDropped;
@property (retain, nonatomic) BWMemoryPool *memoryPool;

+ (void)initialize;

- (id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)a0;
- (void)dealloc;
- (void)emitStillImagePrewarmMessageWithSettings:(id)a0;
- (void)invalidate;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)a0;
- (void)setPreparedSharedPixelBufferPool:(id)a0;
- (id)initWithMediaType:(unsigned int)a0 node:(id)a1;
- (id)description;
- (void)setMediaConfiguration:(id)a0 forAttachedMediaKey:(id)a1;
- (void)setNodePreparedPixelBufferPool:(id)a0;
- (int)_passthroughModeForAttachedMediaKey:(id)a0;
- (void)prepareForConfiguredFormatToBecomeLive;
- (void)emitDroppedSample:(id)a0;
- (id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)a0 inputIndex:(unsigned long long)a1;
- (void)_clearAllMediaProperties;
- (void)markEndOfLiveOutput;
- (void)addPoolPreallocationCompletionHandler:(id /* block */)a0;
- (void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)a0;
- (void)makeConfiguredFormatLive;
- (void)setPreparedSharedDataBufferPool:(id)a0;
- (void)setNodePreparedDataBufferPool:(id)a0;
- (id)mediaPropertiesForAttachedMediaKey:(id)a0;
- (void)emitSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)a0;
- (id)mediaConfigurationForAttachedMediaKey:(id)a0;
- (void)emitNodeError:(id)a0;
- (void)_setMediaProperties:(id)a0 forAttachedMediaKey:(id)a1;
- (void)suspendResources;

@end
