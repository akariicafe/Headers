@class NSString, UIViewController;

@interface TranslationToChosenLocaleActivity : TranslationActivity <_SFTranslationTargetLocaleAlertControllerDelegate> {
    UIViewController *_activityViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)actionType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)translationAlertController:(id)a0 didSelectLocale:(id)a1;
- (void)translationAlertController:(id)a0 validateTargetLocale:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)translationAlertControllerShouldDismissAfterSelection:(id)a0;
- (BOOL)canPerformWithTranslationContext:(id)a0;
- (void)prepareWithTranslationContext:(id)a0;

@end
