@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CoreSpeechXPCFakeModelMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int fakeAssetRollNotificationRegistrationToken;
@property (retain) NSString *lastFakeModelUsedHash;
@property BOOL shouldRollFakeModel;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)_registerForFakeAssetRollNotification;

@end
