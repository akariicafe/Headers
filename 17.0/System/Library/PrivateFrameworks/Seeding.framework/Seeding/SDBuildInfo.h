@interface SDBuildInfo : NSObject

@property (class, readonly, nonatomic) BOOL isFeedbackAssistantAvailable;

+ (BOOL)currentBuildIsSeed;

@end
