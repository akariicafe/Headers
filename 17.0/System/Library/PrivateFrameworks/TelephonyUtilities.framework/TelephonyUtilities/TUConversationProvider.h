@class TUConversationProviderConfiguration, NSArray, NSString, NSObject;
@protocol OS_tcc_identity;

@interface TUConversationProvider : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) TUConversationProvider *expanseProvider;
@property (class, readonly, nonatomic) TUConversationProvider *faceTimeProvider;
@property (class, readonly, nonatomic) TUConversationProvider *unknownProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) unsigned long long defaultAVMode;
@property (readonly, copy, nonatomic) NSArray *supportedMediaTypes;
@property (readonly, nonatomic) TUConversationProviderConfiguration *providerConfiguration;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)providerForIdentifier:(id)a0;
+ (BOOL)matchesDefaultProviderIdentifier:(id)a0;

- (BOOL)supportsSharePlay;
- (BOOL)supportsLinks;
- (unsigned long long)hash;
- (BOOL)isEqualToConversationProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)pseudonymFeatureID;
- (id)description;
- (id)bundleIdentifier;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsAVMode:(unsigned long long)a0;
- (BOOL)isDefaultProvider;
- (BOOL)supportsVideo;
- (BOOL)isEqual:(id)a0;
- (id)initWithConversationProvider:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)supportsMediaType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
