@interface AXGeneralLanguageVoicePickerController : AXLanguageSpeechBaseController

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)_handleUnifiedSelectedVoice:(id)a0;

@end
