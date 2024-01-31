@class NSString, UICollectionViewDiffableDataSource, UICollectionView, UICollectionViewCompositionalLayout;
@protocol CKMentionSuggestionViewDataSource, CKMentionSuggestionViewDelegate;

@interface CKMentionSuggestionView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *suggestionViewLayout;
@property (nonatomic) BOOL hasCompletedInitialLayoutPass;
@property (weak, nonatomic) id<CKMentionSuggestionViewDelegate> delegate;
@property (weak, nonatomic) id<CKMentionSuggestionViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void)dealloc;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)suggestionsDidChange;
- (id)suggestionsLayout;
- (id)suggestionsLayoutSectionForEnvironment:(id)a0;

@end
