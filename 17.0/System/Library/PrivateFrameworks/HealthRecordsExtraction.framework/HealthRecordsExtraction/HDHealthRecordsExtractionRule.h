@class NSString, NSArray;

@interface HDHealthRecordsExtractionRule : NSObject

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSArray *transforms;

+ (id)extractionRuleWithDefinition:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)definitionBySubstitutingKeyPathWith:(id)a0;
- (id)initWithKeyPath:(id)a0 transforms:(id)a1;

@end
