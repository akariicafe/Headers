@class NSArray, NSMutableArray;

@interface BWMotionDataTimeMachine : NSObject {
    NSMutableArray *_cache;
    NSArray *_motionMetadataKeys;
    NSArray *_sampleBufferAttachmentKeys;
    unsigned long long _earliestAvailableMotionDataSerialNumber;
    unsigned long long _latestAvailableMotionDataSerialNumber;
    unsigned long long _capacity;
    BOOL _synchronizedSlaveMotionDataCachingEnabled;
    BOOL _cacheEntireMetadataDictionary;
    struct OpaqueFigSimpleMutex { } *_propertyMutex;
}

@property (readonly) BOOL synchronizedSlaveMotionDataCachingEnabled;
@property (readonly) unsigned long long earliestAvailableMotionDataSerialNumber;
@property (readonly) unsigned long long latestAvailableMotionDataSerialNumber;

+ (void)initialize;

- (void)dealloc;
- (unsigned long long)addMotionDataToCacheForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)copyMotionDataForSerialNumber:(unsigned long long)a0;
- (id)copyMotionDataForStartingSerialNumber:(unsigned long long)a0 endingSerialNumber:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0 synchronizedSlaveMotionDataCachingEnabled:(BOOL)a1 cacheEntireMetadataDictionary:(BOOL)a2;

@end
