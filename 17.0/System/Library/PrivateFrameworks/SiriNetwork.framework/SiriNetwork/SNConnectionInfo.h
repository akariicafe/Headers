@class SAConnectionPolicyRoute, NSString, SAConnectionPolicy, NSError, SNConnectionInfoInternal;

@interface SNConnectionInfo : NSObject

@property (retain, nonatomic) SNConnectionInfoInternal *underlyingConnectionInfo;
@property (nonatomic) long long connectionProtocolTechnology;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *connectionId;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL prefersWWAN;
@property (nonatomic) BOOL skipPeer;
@property (nonatomic) BOOL useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerErrorReason;
@property (nonatomic) BOOL forceReconnect;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL imposePolicyBan;
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic, getter=isForceOnDeviceOnlyDictationEnabled) BOOL forceOnDeviceOnlyDictation;

- (id)init;
- (void).cxx_destruct;

@end
