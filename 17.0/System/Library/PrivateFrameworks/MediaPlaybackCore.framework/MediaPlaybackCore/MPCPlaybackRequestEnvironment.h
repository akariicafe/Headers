@class NSString, MPCPlaybackDelegationProperties, ICUserIdentity;

@interface MPCPlaybackRequestEnvironment : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) MPCPlaybackRequestEnvironment *activeAccountRequestEnvironment;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientVersion;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;

+ (id)payloadValueFromJSONValue:(id)a0;
+ (id)requestEnvironmentWithUserIdentity:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserIdentity:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)a0;
- (id)_createMusicKitRequestContext;
- (id)_createStoreRequestContext;
- (id)mpc_jsonValue;
- (id)rectifiedPlaybackRequestEnvironmentWithReasons:(id *)a0;

@end
