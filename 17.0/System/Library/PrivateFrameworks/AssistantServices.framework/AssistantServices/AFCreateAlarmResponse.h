@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSString *alarmIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
