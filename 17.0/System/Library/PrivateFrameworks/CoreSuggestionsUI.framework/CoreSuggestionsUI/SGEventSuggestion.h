@class NSString, EKICSPreviewController;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, EKICSPreviewControllerDelegate, SGSuggestionList> {
    EKICSPreviewController *_icsPreviewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)icsPreviewControllerWantsDismissal:(id)a0;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void).cxx_destruct;
- (BOOL)suggestionListSupportsDismissal;
- (id)suggestionAttributedSubtitle;
- (id)suggestionList;
- (id)suggestionPrimaryAction;
- (void)eventViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)a0;
- (void)_dismissViewController:(id)a0 retainBanner:(BOOL)a1;
- (id)_icsDataEkEvent:(id)a0;
- (BOOL)_isSourceAccountManaged;
- (void)_previewControllerForICSEvent:(id)a0 eventStore:(id)a1;
- (void)preloadPrimaryActionViewController;

@end
