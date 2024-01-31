@class NSArray, UITableViewCell, CKConversationListCellLayout, NSString, NSObject;
@protocol CKConversationListEmbeddedCollectionViewCellDelegate;

@interface CKConversationListEmbeddedCollectionViewCell : UICollectionViewListCell <CKConversationListCellLayoutConfigurable>

@property (retain, nonatomic) UITableViewCell *embeddedTableViewCell;
@property (weak, nonatomic) NSObject<CKConversationListEmbeddedCollectionViewCellDelegate> *embeddedCellDelegate;
@property (nonatomic) unsigned long long editingMode;
@property (nonatomic) BOOL shouldUseSidebarBackgroundConfiguration;
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout;
@property (retain, nonatomic) NSArray *linkInteractions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_contentViewClass;
+ (Class)embeddedTableViewCellClass;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)configurationState;
- (void)configureLinkInteractionsFor:(id)a0;
- (void)forwardStateToEmbeddedCell:(id)a0;
- (id)insertCellAccessoryConfiguration;
- (id)leadingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)a0;
- (id)multiselectCellAccessoryConfiguration;
- (id)pinButton;
- (void)pinButtonTapped:(id)a0;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (id)trailingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)a0;

@end
