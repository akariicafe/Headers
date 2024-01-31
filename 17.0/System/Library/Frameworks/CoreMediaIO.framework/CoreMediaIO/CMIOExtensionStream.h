@class CMIOExtensionStreamCustomClockConfiguration, NSArray, NSString, CMIOExtensionDevice, NSUUID, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, CMIOExtensionStreamSource;

@interface CMIOExtensionStream : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changedPropertiesLock;
    NSMutableDictionary *_changedProperties;
    unsigned long long _sequenceNumber;
    unsigned long long _audioSequenceNumber;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _statsLastSampleTime;
    unsigned int _statsMediaType;
    unsigned int _statsSubType;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _statsTotalDuration;
    unsigned long long _statsTotalSampleCount;
    struct { int width; int height; } _statsDimensions;
    NSObject<OS_dispatch_source> *_statsTimer;
    NSMutableDictionary *_streamingClientsMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamingClientsLock;
    NSArray *_streamingClients;
    NSString *_description;
}

@property (copy) NSArray *streamingClients;
@property (weak, nonatomic) CMIOExtensionDevice *parent;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSUUID *streamID;
@property (readonly) long long direction;
@property (readonly) long long clockType;
@property (readonly) CMIOExtensionStreamCustomClockConfiguration *customClockConfiguration;
@property (readonly, weak) id<CMIOExtensionStreamSource> source;

+ (id)internalProperties;
+ (id)internalWritableProperties;
+ (id)streamWithLocalizedName:(id)a0 streamID:(id)a1 direction:(long long)a2 clockType:(long long)a3 source:(id)a4;
+ (id)streamWithLocalizedName:(id)a0 streamID:(id)a1 direction:(long long)a2 customClockConfiguration:(id)a3 source:(id)a4;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_clientQueue_addStreamingClient:(id)a0;
- (id)_clientQueue_internalPropertyStatesForProperties:(id)a0;
- (void)_clientQueue_removeStreamingClient:(id)a0;
- (id)_clientQueue_setAndRemoveInternalPropertyValuesForClient:(id)a0 propertyValues:(id)a1 error:(id *)a2;
- (id)_clientQueue_streamingClientsMap;
- (id)_initWithLocalizedName:(id)a0 streamID:(id)a1 direction:(long long)a2 clockType:(long long)a3 customClockConfiguration:(id)a4 source:(id)a5;
- (void)clientQueue_updateMutableStreamPropertiesByPolicy;
- (void)consumeSampleBufferFromClient:(id)a0 completionHandler:(id /* block */)a1;
- (void)enqueueReactionEffect:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithLocalizedName:(id)a0 streamID:(id)a1 direction:(long long)a2 clockType:(long long)a3 source:(id)a4;
- (id)initWithLocalizedName:(id)a0 streamID:(id)a1 direction:(long long)a2 customClockConfiguration:(id)a3 source:(id)a4;
- (void)notifyPropertiesChanged:(id)a0;
- (void)notifyScheduledOutputChanged:(id)a0;
- (void)sendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 discontinuity:(unsigned int)a1 hostTimeInNanoseconds:(unsigned long long)a2;

@end
