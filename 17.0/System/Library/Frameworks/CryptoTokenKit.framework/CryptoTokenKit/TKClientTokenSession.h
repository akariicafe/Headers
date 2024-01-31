@class LAContext, NSDictionary, TKClientToken, NSArray, NSString;

@interface TKClientTokenSession : NSObject

@property (retain, nonatomic) LAContext *LAContext;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) TKClientToken *token;
@property (nonatomic) BOOL authenticateWhenNeeded;
@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *certificates;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSString *slotName;
@property (nonatomic) BOOL _testing_AuthenticateInternally;
@property (nonatomic) BOOL _testing_ForceAuthenticationNeeded;
@property (retain, nonatomic) id _testing_AuthContextUsed;

- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (BOOL)isValidWithError:(id *)a0;
- (id)processObjectCreationAttributes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)_initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (BOOL)deleteObject:(id)a0 error:(id *)a1;
- (id)initWithTokenID:(id)a0 LAContext:(id)a1 error:(id *)a2;

@end
