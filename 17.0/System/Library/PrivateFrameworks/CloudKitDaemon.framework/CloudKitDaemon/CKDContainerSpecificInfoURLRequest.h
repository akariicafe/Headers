@class NSString, CKDContainerServerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (long long)partitionType;
- (void).cxx_destruct;
- (long long)serverType;
- (id)url;
- (BOOL)allowsAuthedAccount;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 containerIdentifier:(id)a1;
- (void)requestDidParseJSONObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;

@end
