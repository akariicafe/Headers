@class NSArray;

@interface MAAutoAssetPushNotificationHistory : NSObject

@property (retain, nonatomic) NSArray *notificationHistory;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_historyURL;
- (BOOL)_loadHistoryWithError:(id *)a0;
- (BOOL)addNotificationsToHistory:(id)a0 withError:(id *)a1;
- (BOOL)clearHistoryWithError:(id *)a0;

@end
