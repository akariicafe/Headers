@interface StateReplicator.ConcreteIDSDependency : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ _accountsChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountsChanged;
    void /* unknown type, empty encoding */ _devicesChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_devicesChanged;
    void /* unknown type, empty encoding */ serviceName;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ _localDeviceID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localDeviceID;
}

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
