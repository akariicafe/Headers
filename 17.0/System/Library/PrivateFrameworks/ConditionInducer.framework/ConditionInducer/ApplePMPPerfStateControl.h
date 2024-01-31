@class NSString;

@interface ApplePMPPerfStateControl : NSObject {
    unsigned int _connection;
    unsigned int _powerState;
    unsigned long long _nDomains;
    BOOL _isSupported;
    unsigned int _currentPMPVersion;
    struct { NSString *name; unsigned long long stateValues[4]; unsigned long long currentMinState; unsigned long long currentMaxState; } _domainInfos[32];
}

- (void)tearDown;
- (void).cxx_destruct;
- (void)_copySelectorsForService;
- (BOOL)_disableConsistentPerfState;
- (BOOL)_enableConsistentPerfState:(unsigned int)a0;
- (BOOL)_open:(unsigned int)a0;
- (BOOL)setupConnectionForPowerState:(unsigned int)a0;

@end
