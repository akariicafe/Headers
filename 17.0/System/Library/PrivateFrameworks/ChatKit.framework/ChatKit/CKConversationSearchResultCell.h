@class CKSpotlightQueryResult, NSString, UITableViewCell, CKConversationListCellLayout, CALayer;
@protocol CKConversationSearchCellProtocol, CKConversationSearchResultCellDelegate;

@interface CKConversationSearchResultCell : UICollectionViewCell <CKSearchResultCell, CKConversationListCellLayoutConfigurable, CKConversationSearchCellDelegate>

@property (retain, nonatomic) UITableViewCell<CKConversationSearchCellProtocol> *searchCell;
@property (retain, nonatomic) CKSpotlightQueryResult *result;
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL shouldInsetResults;
@property (readonly, nonatomic) CALayer *topHairline;
@property (readonly, nonatomic) CALayer *bottomHairline;
@property (weak, nonatomic) id<CKConversationSearchResultCellDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (Class)conversationListCellClass;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (id)configurationState;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (void)forwardStateToEmbeddedCell:(id)a0;
- (void)refreshForSearchTextIfNeeded:(id)a0;
- (double)widthForDeterminingAvatarVisibility;

@end
