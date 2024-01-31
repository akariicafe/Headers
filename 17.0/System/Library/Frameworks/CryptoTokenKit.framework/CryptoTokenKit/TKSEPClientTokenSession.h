@class TKTokenID;

@interface TKSEPClientTokenSession : TKClientTokenSession

@property (readonly, nonatomic) TKTokenID *tokenID;

- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (BOOL)forceSystemSession;

@end
