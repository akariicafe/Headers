@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ quotaFetchedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;

@end
