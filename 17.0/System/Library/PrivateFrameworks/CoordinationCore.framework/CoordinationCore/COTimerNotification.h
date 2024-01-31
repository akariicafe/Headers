@class NSArray;

@interface COTimerNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSArray *timers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTimers:(id)a0;

@end
