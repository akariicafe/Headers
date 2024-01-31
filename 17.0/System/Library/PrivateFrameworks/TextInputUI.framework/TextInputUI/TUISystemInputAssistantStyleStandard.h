@class UIColor, UIImageSymbolConfiguration;

@interface TUISystemInputAssistantStyleStandard : NSObject <TUISystemInputAssistantStyle>

@property (readonly, nonatomic) BOOL enableButtonTintColor;
@property (readonly, nonatomic) double highlightMargin;
@property (readonly, nonatomic) double highlightCornerRadius;
@property (readonly, nonatomic) BOOL useContinuousCornerInHighlight;
@property (readonly, nonatomic) BOOL drawsPredictionBackdropView;
@property (readonly, nonatomic) UIColor *predictionSeparatorColor;
@property (readonly, nonatomic) UIColor *predictionHighlightColor;
@property (readonly, nonatomic) double barButtonWidth;
@property (readonly, nonatomic) double minimumInterBarItemSpace;
@property (readonly, nonatomic) UIImageSymbolConfiguration *barButtonImageSymbolConfiguration;
@property (readonly, nonatomic) double separatorMargin;
@property (readonly, nonatomic) BOOL shouldAnimatePredictionCandidate;
@property (readonly, nonatomic) BOOL clipsToBounds;

@end
