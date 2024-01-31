@class NPSDomainAccessor, NSArray, NPSManager;

@interface IPWatchLocaleController : NSObject

@property (retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain;
@property (retain, nonatomic) NPSManager *syncManager;
@property (retain, nonatomic) NSArray *systemLanguages;

- (BOOL)isMirroringEnabled;
- (id)init;
- (id)preferredLanguages;
- (void)setLocale:(id)a0;
- (void).cxx_destruct;
- (void)setLanguages:(id)a0;
- (void)updateLocale:(id)a0;
- (id)deviceLanguage;
- (void)mirrorLanguagesAndLocaleToWatch;
- (void)resetTimeFormat;
- (id)initWithSystemLanguages:(id)a0;
- (void)initializeMirrorSettings;
- (void)postLocaleChangedNotification;

@end
