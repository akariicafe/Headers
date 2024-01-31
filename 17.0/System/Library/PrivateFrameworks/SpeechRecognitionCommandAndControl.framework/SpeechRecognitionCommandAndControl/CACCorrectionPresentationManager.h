@class AXElement, NSString;

@interface CACCorrectionPresentationManager : CACSimpleContentViewManager <CACCorrectionsPresentationDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) AXElement *element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)axNotification;
+ (long long)remoteViewType;

- (BOOL)isOverlay;
- (void).cxx_destruct;
- (void)_showCorrectionsForElement:(id)a0 fromString:(id)a1 withAlternatives:(id)a2 withEmojis:(id)a3 portraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)correctionsPresentationViewController:(id)a0 didSelectItemWithText:(id)a1;
- (id)currentlyDisplayedCorrections;
- (void)dismissCorrectionsPresentationViewController:(id)a0;
- (void)handleAXNotificationData:(void *)a0;
- (void)hideIfNeededForElements:(id)a0;
- (void)showCorrectionsForElement:(id)a0 nBestStrings:(id)a1;

@end
