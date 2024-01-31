@class ConversationFooterViewDisplayMetrics, UIView, UITraitCollection;

@interface MFMessageDisplayMetrics : NSObject

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (retain, nonatomic) ConversationFooterViewDisplayMetrics *footerViewDisplayMetrics;
@property (nonatomic) double footerViewButtonsAnimationOffset;
@property (retain, nonatomic) UIView *trailingButtonView;
@property (readonly, nonatomic) BOOL hasCompactLayout;
@property (readonly, nonatomic) BOOL hasGenerousMargins;
@property (readonly, nonatomic) BOOL prefersFlushSeparator;
@property (readonly, nonatomic) BOOL prefersFlushSeparatorForLeadingEdge;
@property (readonly, nonatomic) double avatarDiameterForCurrentContentSize;
@property (readonly, nonatomic) double minHorizontalSpacing;
@property (readonly, nonatomic) double horizontalSpacing;
@property (readonly, nonatomic) double topToSenderBaseline;
@property (readonly, nonatomic) double topToSenderBaselineInConversation;
@property (readonly, nonatomic) double topToSenderBaselineInConversationForMailActionHeader;
@property (readonly, nonatomic) double baselineToBaselineSpacingInConversationForMailActionHeader;
@property (readonly, nonatomic) double baselineToBaselineSpacing;
@property (readonly, nonatomic) double baselineToBaselineSpacingInConversation;
@property (readonly, nonatomic) double recipientBaselineToFirstSeparator;
@property (readonly, nonatomic) double recipientBaselineToFirstSeparatorInConversation;
@property (readonly, nonatomic) double firstSeparatorToSubjectBaseline;
@property (readonly, nonatomic) double headerBottomPadding;
@property (readonly, nonatomic) double statusIndicatorHorizontalSpacing;
@property (readonly, nonatomic) double statusIndicatorVerticalSpacing;
@property (readonly, nonatomic) double messageTopPaddingInConversation;
@property (readonly, nonatomic) double messageBottomPaddingInConversation;
@property (readonly, nonatomic) double messageTopPaddingInConversationForMailActionHeader;
@property (readonly, nonatomic) double messageBottomPaddingInConversationForMailActionHeader;
@property (readonly, nonatomic) double estimatedFooterViewHeight;
@property (readonly, nonatomic) double footerViewTopToBaseline;
@property (readonly, nonatomic) BOOL usePhoneLandscapeSymbolConfiguration;
@property (readonly, nonatomic) double cellHeightToStartScroll;
@property (readonly, nonatomic) double footerViewTrailingButtonOrigin;
@property (readonly, nonatomic) double topToGlyphBaselineInMailActionCardHorizontalGroup;
@property (readonly, nonatomic) double baselineToBaselineSpacingInMailActionCardHorizontalGroup;
@property (readonly, nonatomic) double bottomSpacingInMailActionCardHorizontalGroup;
@property (readonly, nonatomic) double topToFirstBaselineSpacingInMailActionCardVerticalGroup;
@property (readonly, nonatomic) double bottomToLastBaselineInMailActionCardVerticalGroup;
@property (readonly, nonatomic) double mailActionCardPreferredHeightForPad;
@property (readonly, nonatomic) double mailActionCardMaximumContainerViewHeightForLargerMediumDetent;
@property (readonly, nonatomic) double mailActionCardSmallerMediumDetentCoverage;
@property (readonly, nonatomic) double mailActionCardLargerMediumDetentCoverage;
@property (readonly, nonatomic) double conversationHeaderViewCollapsedSuperTitleTopToFirstBaseline;
@property (readonly, nonatomic) BOOL conversationHeaderViewShouldHideCollapsedSuperTitle;
@property (readonly, nonatomic) double conversationHeaderViewCollapsedTitleTopToFirstBaseline;
@property (readonly, nonatomic) double conversationHeaderViewCollapsedTitleBottomToLastBaseline;
@property (readonly, nonatomic) double conversationHeaderViewExpandedTitleTopToFirstBaseline;

+ (double)avatarDiameter;
+ (id)displayMetricsWithTraitCollection:(id)a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 interfaceOrientation:(long long)a3;
+ (id)displayMetricsWithTraitCollection:(id)a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 interfaceOrientation:(long long)a3 trailingButtonView:(id)a4;
+ (id)mf_actionCardMetricsFromDisplayMetrics:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_cachedFontForStyle:(id)a0;
- (double)_calculateFooterViewButtonsAnimationOffset;
- (double)_scaledFloatWithValue:(double)a0 fontStyle:(id)a1;
- (double)_scaledFloatWithValue:(double)a0 fontStyle:(id)a1 maximumContentSizeCategory:(id)a2;
- (id)fontCacheKeyPrefix;

@end
