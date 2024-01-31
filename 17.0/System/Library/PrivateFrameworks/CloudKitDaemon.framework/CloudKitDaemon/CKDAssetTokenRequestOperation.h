@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;

@end
