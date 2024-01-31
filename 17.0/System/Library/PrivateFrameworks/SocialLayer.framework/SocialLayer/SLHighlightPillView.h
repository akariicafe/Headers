@class UIColor, UIVisualEffect, NSArray, NSString, NSSet, UIImageView, SLHighlight, UIAction, UIVisualEffectView, UILabel, UIPointerInteraction;
@protocol SLHighlightPillViewDelegate;

@interface SLHighlightPillView : SLRemoteView <UIPointerInteractionDelegate, SLHighlightPillViewCrossPlatform>

@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIVisualEffectView *chevronImageView;
@property (retain, nonatomic) UIVisualEffect *chevronEffect;
@property (retain, nonatomic) UIImageView *lastChevronImageView;
@property (retain, nonatomic) UILabel *noAttributionsDebugLabel;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (retain, nonatomic) NSArray *attributionIdentifiers;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSSet *excludedContextMenuIdentifiers;
@property (retain, nonatomic) UIAction *replyAction;
@property (retain, nonatomic) UIAction *hideAction;
@property (retain, nonatomic) NSArray *contextMenuItems;
@property (retain, nonatomic) NSArray *chevronConstraints;
@property (weak, nonatomic) id<SLHighlightPillViewDelegate> delegate;
@property (nonatomic) BOOL shouldDrawBackgroundBlur;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openMessagesForMessageGUID:(id)a0;

- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (id)_targetedPreviewForInteraction:(id)a0;
- (id)_attributionIdentifiers;
- (void)_configureChevronForSlotStyle:(id)a0;
- (void)_hideMenuItemSelected;
- (void)_pillTapped:(id)a0 forEvent:(id)a1;
- (void)_replyMenuItemSelected;
- (void)_setupBlurView;
- (void)_setupDebugPillLabel;
- (BOOL)_shouldDisplayDebugPillLabel;
- (id)_uiActionItems;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (double)expectedHeightForMaxWidth:(double)a0;
- (id)initWithHighlight:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2 shouldDrawBlur:(BOOL)a3;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)refreshContextMenuItems;
- (void)remoteContentIsLoadedValueChanged;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)a0 style:(id)a1 yield:(id /* block */)a2;
- (BOOL)shouldInvalidatePreviousPlaceHolderSlotContent:(id)a0 forStyle:(id)a1;
- (BOOL)shouldShowContextMenu;
- (BOOL)shouldShowReplyContextMenu;

@end
