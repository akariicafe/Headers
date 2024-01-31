@class NSData, LAContext, TKSharedResource;

@interface TKAuthContext : NSObject

@property (readonly, nonatomic) LAContext *authContext;
@property (readonly, nonatomic) NSData *ACMHandle;
@property (readonly, nonatomic) TKSharedResource *sharedResource;

- (id)initWithLAContext:(id)a0 ACMHandle:(id)a1 sharedResource:(id)a2;
- (void).cxx_destruct;

@end
