@class INIntent, NSString, NSDictionary, LNActionParameterMetadata;

@interface WFRemoteWidgetConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (readonly, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic) Class responseClass;

+ (id)fromSecureData:(id)a0;
+ (id)defaultLNOptionForParameterRequestWithActionIdentifier:(id)a0 serializedParameters:(id)a1 parameterName:(id)a2;
+ (id)lnActionMetadataRequestWithActionIdentifier:(id)a0 serializedParameters:(id)a1;
+ (id)lnOptionsForParameterRequesttWithActionIdentifier:(id)a0 serializedParameters:(id)a1 parameterName:(id)a2 searchTerm:(id)a3;
+ (id)localizedIntentRequestWithIntent:(id)a0;
+ (id)optionsForParameterRequestWithIntent:(id)a0 parameterName:(id)a1 searchTerm:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestType:(long long)a0 intent:(id)a1 actionIdentifier:(id)a2 serializedParameters:(id)a3 parameterName:(id)a4 searchTerm:(id)a5;
- (id)requestTypeDescription;
- (id)secureData;

@end
