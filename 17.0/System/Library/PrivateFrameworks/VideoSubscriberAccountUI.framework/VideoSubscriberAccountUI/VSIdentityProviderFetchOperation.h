@class VSOptional, NSString, NSOperationQueue, VSAuditToken;

@interface VSIdentityProviderFetchOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSString *identityProviderID;
@property (nonatomic) BOOL fetchFromStoreOnly;
@property (retain, nonatomic) VSOptional *result;
@property (readonly, copy, nonatomic) NSString *identityProviderUniqueID;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithIdentityProviderID:(id)a0;
- (id)_fetchAllOperation;
- (id)initWithIdentityProviderUniqueID:(id)a0;

@end
