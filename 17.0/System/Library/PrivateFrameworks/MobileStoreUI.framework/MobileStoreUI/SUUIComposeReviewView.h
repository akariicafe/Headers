@class SUTextContentView, NSString, SULoadingView, SUUIReviewMetadata, UIScrollView, SUUIComposeTextView, SUUIComposeReviewHeaderView;
@protocol SUUIComposeReviewViewDelegate;

@interface SUUIComposeReviewView : UIView <SUUIComposeReviewHeaderDelegate, UITextViewDelegate, UITextContentViewDelegate> {
    long long _currentBodyLength;
    SUUIComposeReviewHeaderView *_headerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _remoteKeyboardFrame;
    unsigned char _loading : 1;
    SULoadingView *_loadingView;
    SUUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    SUTextContentView *_textContentView;
    SUUIComposeTextView *_textContentViewAlt;
}

@property (readonly, nonatomic) long long composeReviewStyle;
@property (weak, nonatomic) id<SUUIComposeReviewViewDelegate> delegate;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) float rating;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)_updateContentSize;
- (void)dealloc;
- (void)reloadData;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutLoadingView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)_body;
- (void)textContentView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textContentView:(id)a0 shouldChangeSizeForContentSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textContentView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (BOOL)textContentView:(id)a0 shouldScrollForPendingContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)textContentViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)_showLoadingView;
- (void)_keyboardVisibilityDidChangeNotification:(id)a0;
- (BOOL)_composeReviewTextViewShouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)_delayedUpdateReviewLength;
- (BOOL)_isReviewTextOptional;
- (void)_layoutComposeView;
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)a0;
- (id)_reviewPlaceholder;
- (void)_showComposeView;
- (void)composeHeaderViewValidityDidChange:(id)a0;
- (void)composeHeaderViewValuesDidChange:(id)a0;
- (id)copyReview;
- (void)setReview:(id)a0;

@end
