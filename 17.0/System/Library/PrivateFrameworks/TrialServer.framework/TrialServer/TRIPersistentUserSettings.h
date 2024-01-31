@class TRIKVStore;

@interface TRIPersistentUserSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;

- (unsigned char)persistedDiagnosticsUsageEnabled;
- (void)persistIsSiriEnabled:(unsigned char)a0;
- (id)persistedSiriLocale;
- (unsigned char)persistedIsSiriEnabled;
- (id)initWithKeyValueStore:(id)a0;
- (void)persistSiriLocale:(id)a0;
- (void).cxx_destruct;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)a0;
- (unsigned char)persistedOptOutStatus;
- (void)persistOptOutStatus:(unsigned char)a0;

@end
