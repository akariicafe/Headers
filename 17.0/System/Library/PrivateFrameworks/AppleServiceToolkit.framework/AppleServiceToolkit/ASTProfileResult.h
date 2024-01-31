@class ASTIdentity, NSArray;

@interface ASTProfileResult : ASTSealablePayload

@property (readonly, nonatomic) ASTIdentity *identity;
@property (retain, nonatomic) NSArray *properties;
@property (retain, nonatomic) NSArray *tests;

+ (id)resultWithIdentity:(id)a0;
+ (id)sealedProfileResultWithPayload:(id)a0 signature:(id)a1;

- (id)init;
- (id)initWithIdentity:(id)a0;
- (void).cxx_destruct;
- (id)generatePayload;

@end
