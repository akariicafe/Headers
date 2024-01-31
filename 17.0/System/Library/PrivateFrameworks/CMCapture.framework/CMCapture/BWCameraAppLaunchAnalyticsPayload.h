@class NSString;

@interface BWCameraAppLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) BOOL isPrewarmed;
@property (copy, nonatomic) NSString *launchMode;
@property (nonatomic) int devicePosition;
@property (copy, nonatomic) NSString *prewarmReason;
@property (nonatomic) int launchDuration;
@property (nonatomic) int memoryStatusLevel;
@property (nonatomic) int thermalLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)init;
- (id)eventDictionary;
- (void)reset;
- (void)dealloc;

@end
