@class NSObject;
@protocol OS_dispatch_queue, ATXUpdatePredictionsDelegate;

@interface ATXAppClipSettingsUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;

- (id)init;
- (void)registerSiriSettingsChangedNotificationHandler;
- (void).cxx_destruct;
- (void)handleSiriSettingsChangedNotification;

@end
