@class NSString, NSDate;

@interface ATXUsageInsightsAppSessionEvent : NSObject <NSSecureCoding, ATXUsageInsightsGraphProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, copy, nonatomic) NSString *interruptedBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usageInsightsAppLaunchReasonFromBMAppInFocus:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 category:(unsigned long long)a1 launchReason:(id)a2 startTime:(id)a3 endTime:(id)a4 duration:(double)a5;

@end
