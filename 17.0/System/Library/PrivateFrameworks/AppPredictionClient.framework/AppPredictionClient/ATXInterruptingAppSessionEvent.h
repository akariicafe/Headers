@class NSString, NSDate;

@interface ATXInterruptingAppSessionEvent : NSObject <NSSecureCoding, ATXUsageInsightsGraphProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *interruptingBundleID;
@property (readonly, copy, nonatomic) NSString *interruptedBundleID;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) unsigned long long interruptingCategory;
@property (readonly, nonatomic) unsigned long long interruptedCategory;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
