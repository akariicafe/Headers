@class MTAlarm;

@interface COAlarmRequest : COMeshRequest

@property (readonly, copy, nonatomic) MTAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarm:(id)a0;

@end
