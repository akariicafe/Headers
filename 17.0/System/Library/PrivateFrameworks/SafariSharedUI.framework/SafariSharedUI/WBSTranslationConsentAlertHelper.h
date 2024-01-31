@class NSString, UIViewController;
@protocol WBSTranslationConsentAlertHelperDelegate;

@interface WBSTranslationConsentAlertHelper : NSObject <UIAdaptivePresentationControllerDelegate> {
    UIViewController *_currentlyPresentedViewController;
    id /* block */ _consentCompletionHandler;
}

@property (weak, nonatomic) id<WBSTranslationConsentAlertHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)consentAlertForType:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_callCompletionHandlerIfNeededWithConsent:(BOOL)a0;
- (void)_enableTranslation:(id)a0;
- (void)_notNow:(id)a0;

@end
