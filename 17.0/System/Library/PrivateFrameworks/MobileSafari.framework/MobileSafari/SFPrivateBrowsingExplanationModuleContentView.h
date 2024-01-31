@class NSString, NSArray, UITextView, UIButton, UICollectionViewDiffableDataSource, UICollectionView, WBSStartPageBanner, UILabel;

@interface SFPrivateBrowsingExplanationModuleContentView : UIView <UITextViewDelegate> {
    NSArray *_constraintsForTitleBelowDismissButton;
    NSArray *_constraintsForTitleNextToDismissButton;
    UICollectionView *_explanationItemCollectionView;
    UICollectionViewDiffableDataSource *_explanationItemCollectionViewDataSource;
    UITextView *_messageTextView;
    UIButton *_dismissButton;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) WBSStartPageBanner *banner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_title;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_attributedMessage;
- (double)_preferredHeight;
- (id)initWithBanner:(id)a0;
- (BOOL)_hasMessageText;
- (void)_applyMessageTextViewStyle;
- (void)_applyMessageViewLinkTextAttributes;
- (void)_bannerDidChange;
- (void)_dismissModule;
- (void)_setUpDismissButtonIfNeeded;
- (void)_setUpExplanationItemCollectionViewIfNeeded;
- (void)_setUpMessageTextIfNecessary;
- (void)_updateAllowsTitleNextToDismissButton;

@end
