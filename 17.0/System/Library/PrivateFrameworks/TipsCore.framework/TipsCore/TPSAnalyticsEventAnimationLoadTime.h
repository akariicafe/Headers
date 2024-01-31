@class NSString;

@interface TPSAnalyticsEventAnimationLoadTime : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (nonatomic) double animationLoadTime;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 animationLoadTime:(double)a1;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 animationLoadTime:(double)a1;

@end
