@class NSSet, NSString, CEMPredicateBase;

@interface CEMPredicateNot : CEMPredicateBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) CEMPredicateBase *payloadPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithPredicate:(id)a0;
+ (id)buildRequiredOnlyWithPredicate:(id)a0;

@end
