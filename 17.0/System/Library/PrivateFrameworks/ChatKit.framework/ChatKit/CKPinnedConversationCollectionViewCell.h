@class NSArray, CKPinnedConversationView, CKConversationListAccessoryView, NSObject;
@protocol CKPinnedConversationCollectionViewCellDelegate;

@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKPinnedConversationView *pinnedConversationView;
@property (nonatomic, setter=setShowingUnpinAccessory:) BOOL isShowingUnpinAccessory;
@property (retain, nonatomic) CKConversationListAccessoryView *unpinAccessoryView;
@property (nonatomic, setter=setShowingCheckboxAccessory:) BOOL isShowingCheckboxAccessory;
@property (retain, nonatomic) CKConversationListAccessoryView *checkboxAccessoryView;
@property (nonatomic, setter=setJittering:) BOOL isJittering;
@property (nonatomic) BOOL isPreparingForReuse;
@property (weak, nonatomic) NSObject<CKPinnedConversationCollectionViewCellDelegate> *delegate;
@property (nonatomic) BOOL showsBackgroundViewWhenSelected;
@property (nonatomic) BOOL allowActivitySuppressionWhenSelected;
@property (retain, nonatomic) NSArray *linkInteractions;
@property (readonly, nonatomic) unsigned long long editingMode;

+ (id)reuseIdentifier;
+ (id)_jitterRotationAnimation;
+ (id)_jitterXTranslationAnimation;
+ (id)_jitterYTranslationAnimation;
+ (id)checkmarkAccessoryView;
+ (id)unpinAccessoryView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateGhostedAppearance;
- (id)configurationState;
- (void)dragStateDidChange:(long long)a0;
- (void)_createCheckboxAccessoryIfNecessary;
- (void)_createUnpinAccessoryIfNecessary;
- (void)_updateActivitySupressionForState:(id)a0;
- (void)_updateZPositionForState:(id)a0;
- (double)accessorySizeForLayoutStyle:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })checkboxFrame;
- (void)configureLinkInteractionsFor:(id)a0;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unpinAccessoryViewFrame;
- (void)unpinButtonTapped:(id)a0;
- (void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
- (void)updateUnpinAccessoryImageForCurrentLayoutStyle;

@end
