@class _HMContext, NSUUID, NSString;

@interface HMSettingsMessageHandler : NSObject {
    _HMContext *_context;
    NSUUID *_homeTargetUUID;
    NSUUID *_userTargetUUID;
    NSString *_targetSettingsType;
}

- (void).cxx_destruct;
- (void)configureWithContext:(id)a0;
- (void)sendUpdateValueMessage:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
