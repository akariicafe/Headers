@class NSMutableArray;

@interface ManagedEventHandler : NSObject {
    char *_notifyString;
    int _NotifyToken;
    char *_transportMessageString;
    NSMutableArray *_managedEvents;
}

+ (id)getHandlerByName:(id)a0;
+ (void)initialize;

- (void)populateReply:(id)a0 ForId:(unsigned long long)a1 Count:(unsigned long long)a2;
- (id)initWithName:(id)a0;
- (id)description;
- (void)sendNotificationWithId:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)feedbackForEventId:(unsigned long long)a0;
- (void)didReceiveSyndrome:(id)a0;

@end
