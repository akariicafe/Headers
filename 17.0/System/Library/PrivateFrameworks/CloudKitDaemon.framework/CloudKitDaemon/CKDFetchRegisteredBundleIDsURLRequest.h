@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForContainerAccess;
- (void).cxx_destruct;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (BOOL)requiresTokenRegistration;

@end
