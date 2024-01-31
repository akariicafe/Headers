@class NSSet, NSString, NSArray;

@interface CEMPredicateAny : CEMPredicateBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSArray *payloadPredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithPredicates:(id)a0;
+ (id)buildRequiredOnlyWithPredicates:(id)a0;

@end
