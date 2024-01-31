@class NSString, NSArray;

@interface COMTTimerNotificationAction : COMTAction

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSArray *timers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReason:(id)a0 timers:(id)a1;

@end
