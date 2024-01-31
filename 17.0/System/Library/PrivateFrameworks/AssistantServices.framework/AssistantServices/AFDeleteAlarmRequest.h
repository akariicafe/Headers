@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
