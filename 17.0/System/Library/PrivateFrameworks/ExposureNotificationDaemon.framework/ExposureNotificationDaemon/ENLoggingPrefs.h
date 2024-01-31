@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (id)init;
- (void)loadLoggingPrefs;
- (BOOL)isSensitiveLoggingAllowed;
- (BOOL)isRPILoggingAllowed;
- (void)setLoggingEntitledApp:(BOOL)a0;

@end
