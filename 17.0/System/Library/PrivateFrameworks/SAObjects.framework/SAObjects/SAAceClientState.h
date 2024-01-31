@interface SAAceClientState : SADomainObject

+ (id)aceClientState;
+ (id)aceClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
