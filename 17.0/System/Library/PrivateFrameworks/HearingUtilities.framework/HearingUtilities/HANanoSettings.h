@class NPSDomainAccessor;

@interface HANanoSettings : HUHearingAidSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)currentLocale;
- (id)init;
- (id)nanoDomainAccessor;
- (void)dealloc;
- (id)_valueForPreferenceKey:(id)a0;
- (void)pairedWatchDidChange:(id)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldUseiCloud;

@end
