@class UILabel, NSString;

@interface CKTranscriptCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol>

@property (retain, nonatomic) UILabel *debugLabel;
@property (nonatomic) BOOL wantsDrawerLayout;
@property (nonatomic) char orientation;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) double associatedItemOffset;
@property (nonatomic) BOOL isInReplyContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentAlignmentRect;
@property (nonatomic) BOOL isAnimatingInDarkEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clearFilters;
- (void)performRemoval:(id /* block */)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (void)performHide:(id /* block */)a0;
- (void)performInsertion:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performReveal:(id /* block */)a0;

@end
