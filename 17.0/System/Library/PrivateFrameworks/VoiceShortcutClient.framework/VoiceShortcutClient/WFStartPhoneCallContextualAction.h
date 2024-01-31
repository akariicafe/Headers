@class INPerson;

@interface WFStartPhoneCallContextualAction : WFTopHitItemContextualAction

@property (readonly, nonatomic) INPerson *person;

+ (void)getTopHitContextualActionsWithLimit:(long long)a0 completion:(id /* block */)a1;

- (id)uniqueIdentifier;
- (id)initWithPerson:(id)a0 serializedRepresentation:(id)a1 namedQueryInfo:(id)a2;

@end
