@class NSString;

@interface FCAdStatusCondition : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;

+ (id)adStatusConditionsFromConditionsArray:(id)a0;

- (id)initWithStatusConditionType:(unsigned long long)a0 identifier:(id)a1;
- (void).cxx_destruct;

@end
