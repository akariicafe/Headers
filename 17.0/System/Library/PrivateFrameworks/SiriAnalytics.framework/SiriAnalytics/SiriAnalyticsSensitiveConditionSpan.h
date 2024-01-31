@interface SiriAnalyticsSensitiveConditionSpan : NSObject {
    BOOL _hasStartedAtValue;
    BOOL _hasEndedAtValue;
}

@property (nonatomic) int conditionType;
@property (nonatomic) unsigned long long startedAt;
@property (nonatomic) unsigned long long endedAt;

- (BOOL)containsTimestamp:(unsigned long long)a0;
- (BOOL)hasEndedAt;
- (id)initWithConditionType:(int)a0 startedAt:(unsigned long long)a1;

@end
