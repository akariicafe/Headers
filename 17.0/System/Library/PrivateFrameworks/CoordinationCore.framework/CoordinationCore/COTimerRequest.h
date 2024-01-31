@class MTTimer;

@interface COTimerRequest : COMeshRequest

@property (readonly, copy, nonatomic) MTTimer *timer;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTimer:(id)a0;

@end
