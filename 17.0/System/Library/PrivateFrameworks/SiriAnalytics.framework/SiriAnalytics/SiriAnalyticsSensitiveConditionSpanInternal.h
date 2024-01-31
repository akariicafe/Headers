@interface SiriAnalyticsSensitiveConditionSpanInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestampRange;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ conditionType;
@property (nonatomic, readonly) unsigned long long startedAt;
@property (nonatomic, readonly) unsigned long long endedAt;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsTimestamp:(unsigned long long)a0;
- (BOOL)hasEndedAt;
- (id)initWithConditionType:(int)a0 startedAt:(unsigned long long)a1;

@end
