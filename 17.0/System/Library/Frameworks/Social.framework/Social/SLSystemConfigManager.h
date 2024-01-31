@class NSString;

@interface SLSystemConfigManager : NSObject {
    void *_prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
    NSString *_serviceType;
}

+ (id)sharedInstanceForCallbackWhileLocked:(void *)a0;
+ (id)sharedInstanceForServiceType:(id)a0;

- (void)_refresh;
- (void)_tearDown;
- (void)dealloc;
- (void *)_getValueForKey:(id)a0;
- (id)initWithServiceType:(id)a0;
- (void)_synchronize;
- (void).cxx_destruct;
- (void)_setValue:(void *)a0 forKey:(id)a1;
- (void)_keepAlive;
- (void)_initializeSystemConfigPrefs:(id)a0;
- (void)_notifyTarget:(unsigned int)a0;
- (void)_setCallback:(void /* function */ *)a0 withContext:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;
- (id)cachedUsername;
- (void)setCachedUsername:(id)a0;

@end
