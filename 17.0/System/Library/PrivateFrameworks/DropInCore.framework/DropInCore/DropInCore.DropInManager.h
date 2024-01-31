@interface DropInCore.DropInManager : NSObject <DICHomeManagerDelegate> {
    void /* unknown type, empty encoding */ messageCenter;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ callCenterManager;
    void /* unknown type, empty encoding */ homeManagerProvider;
    void /* unknown type, empty encoding */ deviceManager;
    void /* unknown type, empty encoding */ stateManager;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ transactionManager;
    void /* unknown type, empty encoding */ xpcClientDataSource;
    void /* unknown type, empty encoding */ dropInStateSubscriber;
    void /* unknown type, empty encoding */ dropInSessionAnalyticEvent;
}

- (void)accessoryDidUpdateName:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (void)home:(id)a0 didAddUser:(id)a1;
- (void)home:(id)a0 didUpdateAccessControlForUser:(id)a1;
- (void)didRemoveHome:(id)a0;
- (void)accessoryDidUpdateSupportedCapabilities:(id)a0;
- (void)didAddHome:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
