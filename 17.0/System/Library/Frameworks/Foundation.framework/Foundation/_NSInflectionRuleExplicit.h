@class NSMorphology;

@interface _NSInflectionRuleExplicit : NSInflectionRule

@property (readonly, copy) NSMorphology *morphology;
@property (readonly, nonatomic) long long agreeWithConcept;
@property (readonly, nonatomic) long long agreeWithArgument;
@property (readonly, nonatomic) long long referentConcept;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isAutomatic;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAttributesDictionary:(id)a0;
- (id)initWithMorphology:(id)a0 agreeWithArgument:(long long)a1 agreeWithConcept:(long long)a2 referentConcept:(long long)a3;

@end
