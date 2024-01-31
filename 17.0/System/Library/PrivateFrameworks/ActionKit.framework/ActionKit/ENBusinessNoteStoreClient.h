@class NSString;
@protocol ENBusinessNoteStoreClientDelegate;

@interface ENBusinessNoteStoreClient : ENNoteStoreClient

@property (weak, nonatomic) id<ENBusinessNoteStoreClientDelegate> delegate;
@property (copy, nonatomic) NSString *noteStoreUrl;

+ (id)noteStoreClientForBusiness;

- (id)authenticationToken;
- (void).cxx_destruct;
- (void)createBusinessNotebook:(id)a0 completion:(id /* block */)a1;
- (void)createBusinessNotebook:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;

@end
