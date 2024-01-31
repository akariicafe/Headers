@class INPerson;

@interface WFFaceTimeContextualAction : WFTopHitItemContextualAction

@property (readonly, nonatomic) INPerson *person;

- (id)uniqueIdentifier;
- (id)initWithPerson:(id)a0 type:(unsigned long long)a1 callTypeSerializedRepresentation:(id)a2 personSerializedRepresentation:(id)a3 namedQueryInfo:(id)a4;

@end
