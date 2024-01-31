@class UILabel, NSString, NSArray, UITextView, UIScrollView, PKAccountTermsAndConditionsController, PKAccount;

@interface PKAccountBillPaymentLearnMoreViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate> {
    PKAccount *_account;
    UIScrollView *_scrollView;
    PKAccountTermsAndConditionsController *_termsController;
    NSString *_titleText;
    NSString *_subtitleText;
    NSArray *_suggestionDescriptions;
    NSArray *_footnotes;
    NSString *_customerAgreementText;
    NSString *_customerAgreementLinkText;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_suggestionDescriptionLabels;
    NSArray *_footnoteLabels;
    UITextView *_customerAgreementTextView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_reportEventForPassIfNecessary:(id)a0;
- (id)_customerAgreementAttributedString;

@end
