@class CACPopoverPresentingViewController, NSString, NSArray, CACCorrectionsCandidatesViewController;
@protocol CACCorrectionsPresentationDelegate;

@interface CACCorrectionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACCCorrectionsCandidatesViewControllerDelegate, CACViewController>

@property (retain, nonatomic) CACPopoverPresentingViewController *popoverPresentingViewController;
@property (retain, nonatomic) CACCorrectionsCandidatesViewController *correctionViewController;
@property (weak, nonatomic) id<CACCorrectionsPresentationDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitUpSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (id)init;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)correctionsCandidatesViewController:(id)a0 didSelectItemWithText:(id)a1;
- (void)dismissCorrectionsCandidatesViewController:(id)a0;

@end
