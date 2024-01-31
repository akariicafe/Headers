@interface SafetyMonitorUI.SafetyCacheViewModel : NSObject {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ userType;
    void /* unknown type, empty encoding */ containerVCHandler;
    void /* unknown type, empty encoding */ _safetyCache;
    void /* unknown type, empty encoding */ phoneCache;
    void /* unknown type, empty encoding */ watchCache;
    void /* unknown type, empty encoding */ _cacheExpiryDate;
    void /* unknown type, empty encoding */ _cacheReleaseDate;
    void /* unknown type, empty encoding */ _receiverSessionStatus;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
