@class NSString;

@interface MPCSharedSessionParticipant : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible> {
    BOOL _local;
    long long _sessionType;
    NSString *_expanseIdentifier;
    NSString *_liveLinkIdentifier;
    long long _liveLinkServiceIdentifier;
    NSString *_mediaRemoteGroupSessionIdentifier;
    NSString *_mediaRemoteUserIdentityIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)payloadValueFromJSONValue:(id)a0;

- (void).cxx_destruct;
- (id)mpc_jsonValue;

@end
