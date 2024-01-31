@class CMIOExtensionStreamCustomClockConfiguration, NSString, NSUUID, NSSet, NSArray, CMIOExtensionSessionProvider, NSMutableDictionary;
@protocol CMIOExtensionSessionStreamDelegate;

@interface CMIOExtensionSessionStream : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CMIOExtensionSessionStreamDelegate> _delegate;
    NSMutableDictionary *_propertyStates;
    NSSet *_availableProperties;
    NSArray *_formats;
    BOOL _streaming;
    NSString *_description;
}

@property (readonly, weak, nonatomic) CMIOExtensionSessionProvider *provider;
@property (nonatomic) unsigned long long activeFormatIndex;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (weak, nonatomic) id<CMIOExtensionSessionStreamDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSUUID *streamID;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) long long clockType;
@property (readonly, copy, nonatomic) CMIOExtensionStreamCustomClockConfiguration *customClockConfiguration;
@property (readonly, copy, nonatomic) NSSet *availableProperties;
@property (readonly, nonatomic) NSArray *formats;
@property (readonly, nonatomic) unsigned int activeFormatMediaType;

+ (id)sessionStreamWithPropertyStates:(id)a0 provider:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)completeTransaction;
- (id)cachedPropertyStateForProperty:(id)a0;
- (void)captureAsyncStillImage:(long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)enqueueReactionEffect:(id)a0 reply:(id /* block */)a1;
- (void)propertyStatesForProperties:(id)a0 reply:(id /* block */)a1;
- (void)setActiveFormatIndex:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setPropertyValues:(id)a0 reply:(id /* block */)a1;
- (void)startStream:(id /* block */)a0;
- (void)stopStream:(id /* block */)a0;
- (id)cachedPropertyStatesForProperties:(id)a0;
- (id)copySample:(BOOL *)a0 streamID:(id)a1 error:(id *)a2;
- (id)initWithPropertyStates:(id)a0 provider:(id)a1;
- (void)receivedSample:(id)a0 streamID:(id)a1;
- (void)receivedScheduledOutput:(id)a0 streamID:(id)a1;
- (void)updatePropertyStates:(id)a0 streamID:(id)a1;

@end
