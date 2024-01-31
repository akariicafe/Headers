@class POUIServiceConnection;

@interface POUISettingsManager : NSObject {
    POUIServiceConnection *_serviceConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)deviceStatus;
- (void)startDeviceAction:(long long)a0;
- (void)startUserAction:(long long)a0 forUserName:(id)a1;
- (id)statusForUserName:(id)a0;

@end
