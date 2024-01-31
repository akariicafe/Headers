@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CoreSpotlightPreferences : NSObject

@property (readonly, copy, nonatomic) id /* block */ notify_handler;
@property (retain, nonatomic) NSString *state_key;
@property (nonatomic) const char *notification_key;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (copy, nonatomic) id /* block */ notifyHandler;
@property (readonly, nonatomic) int notifyToken;

- (void)dealloc;
- (void).cxx_destruct;
- (void)handlePreferencesChanged;
- (BOOL)notifyStart;
- (void)saveState:(id)a0;

@end
