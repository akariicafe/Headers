@class MTAlarm;

@interface COMTAlarmDeleteAction : COMTAction

@property (readonly, copy, nonatomic) MTAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAlarm:(id)a0;

@end
