@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    BOOL _alreadyRunning;
}

@property (retain, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithReason:(id)a0 alreadyRunning:(BOOL)a1;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithReason:(id)a0 alreadyRunning:(BOOL)a1;
- (id)initWithCoder:(id)a0;

@end
