@class NSString, AXSpeechSettingsModelController;

@interface AXLanguageSpeechBaseController : AXUISettingsBaseListController

@property (retain, nonatomic) AXSpeechSettingsModelController *speechModelController;
@property (readonly, nonatomic) NSString *speechSourceKey;
@property (readonly, nonatomic) BOOL showsSelectedVoiceVariantForLanguage;
@property (readonly, nonatomic) BOOL includeLocaleInSelectorDialog;

- (id)init;
- (void).cxx_destruct;
- (id)_selectedDialect:(id)a0;
- (id)specifiersForLanguagesAndAccents;

@end
