@interface RTScenarioTrigger : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)scenarioTriggerSettledStateToString:(unsigned long long)a0;
+ (id)scenarioTriggerTypeToString:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
