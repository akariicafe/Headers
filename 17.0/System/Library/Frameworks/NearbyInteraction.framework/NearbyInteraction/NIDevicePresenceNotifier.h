@class NISession;

@interface NIDevicePresenceNotifier : NSObject {
    NISession *parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)a0;
- (void)notifyBluetoothSample:(id)a0;

@end
