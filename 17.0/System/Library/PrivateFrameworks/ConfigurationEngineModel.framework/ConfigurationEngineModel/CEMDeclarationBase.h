@class NSString, NSNumber, CEMAnyPayload;

@interface CEMDeclarationBase : CEMPayloadBase

@property (class, readonly, copy) NSString *declarationClass;

@property (copy, nonatomic) NSString *declarationType;
@property (copy, nonatomic) NSString *declarationIdentifier;
@property (copy, nonatomic) NSString *declarationDescription;
@property (copy, nonatomic) NSString *declarationServerHash;
@property (copy, nonatomic) NSNumber *declarationRequiresNetworkTether;
@property (copy, nonatomic) NSString *declarationActivationScope;
@property (copy, nonatomic) CEMAnyPayload *declarationPayload;

+ (id)declarationForData:(id)a0 error:(id *)a1;
+ (id)declarationForPayload:(id)a0 error:(id *)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeAsDataWithError:(id *)a0;
- (void)updateServerHash;
- (BOOL)loadDeclarationFromDictionary:(id)a0 error:(id *)a1;

@end
