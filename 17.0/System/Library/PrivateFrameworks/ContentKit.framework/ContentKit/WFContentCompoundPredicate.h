@class NSArray, NSSet;

@interface WFContentCompoundPredicate : WFContentPredicate <WFContentPropertyContainer>

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;
@property (readonly, nonatomic) NSSet *containedProperties;

+ (id)andPredicateWithSubpredicates:(id)a0;
+ (id)notPredicateWithSubpredicate:(id)a0;
+ (id)orPredicateWithSubpredicates:(id)a0;

- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)evaluateWithObject:(id)a0 propertySubstitutor:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
