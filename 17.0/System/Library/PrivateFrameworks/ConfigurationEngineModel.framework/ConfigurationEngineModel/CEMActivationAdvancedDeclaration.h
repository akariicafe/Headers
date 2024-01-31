@class CEMAnyPayload, NSSet, NSString, NSArray;

@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSArray *payloadRequiredConfigurations;
@property (copy, nonatomic) NSArray *payloadStandardConfigurations;
@property (copy, nonatomic) CEMAnyPayload *payloadActivationPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withRequiredConfigurations:(id)a1 withStandardConfigurations:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withRequiredConfigurations:(id)a1 withStandardConfigurations:(id)a2 withActivationPredicate:(id)a3;

@end
