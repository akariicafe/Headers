@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject {
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)_cellBroadcastMessageReceived:(id)a0;

@end
