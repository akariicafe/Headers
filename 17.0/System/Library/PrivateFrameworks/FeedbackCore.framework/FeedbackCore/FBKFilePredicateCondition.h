@class NSString;

@interface FBKFilePredicateCondition : FBKManagedFeedbackObject

@property (retain, nonatomic) NSString *questionTat;
@property (retain, nonatomic) NSString *questionValue;

+ (id)entityName;

- (id)description;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
