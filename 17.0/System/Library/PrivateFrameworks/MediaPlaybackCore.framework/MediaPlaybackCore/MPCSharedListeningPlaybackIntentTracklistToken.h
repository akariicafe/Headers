@class NSString, ICLiveLinkIdentity, MPCPlaybackSharedListeningProperties;

@interface MPCSharedListeningPlaybackIntentTracklistToken : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) ICLiveLinkIdentity *identity;

+ (id)payloadValueFromJSONValue:(id)a0;

@end
