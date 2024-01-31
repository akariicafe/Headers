@class NSString;

@interface SiriPrivateLearningAnalytics.PluginSchedulerTimestamp : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
