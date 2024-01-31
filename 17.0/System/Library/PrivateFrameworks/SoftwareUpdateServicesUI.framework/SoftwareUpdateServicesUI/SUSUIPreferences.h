@class NSNumber;

@interface SUSUIPreferences : NSObject

@property (readonly, nonatomic) BOOL alertAfterDownload;
@property (readonly, retain, nonatomic) NSNumber *passcodeRequiredDays;
@property (nonatomic, setter=setNeedsAlertPresentationAfterOTAUpdate:) BOOL needsAlertPresentationAfterOTAUpdate;
@property (readonly, nonatomic) BOOL preventCountdownAlert;
@property (readonly, retain, nonatomic) NSNumber *installAlertIntervalMinutes;
@property (readonly, nonatomic) BOOL preventRollbackPrompt;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_copyNumberPreferenceForKey:(id)a0;
- (void *)_copyPreferenceForKey:(struct __CFString { } *)a0 ofType:(unsigned long long)a1;
- (id)_copyStringPreferenceForKey:(id)a0;
- (BOOL)_getBooleanPreferenceForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_loadPreferences;
- (void)_setBooleanPreferenceForKey:(id)a0 value:(BOOL)a1;

@end
