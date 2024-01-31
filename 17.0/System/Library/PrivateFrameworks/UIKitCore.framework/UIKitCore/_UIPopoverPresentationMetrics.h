@interface _UIPopoverPresentationMetrics : NSObject

@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) BOOL shouldUseVisualStyleAnimationControllerForDismissal;
@property (nonatomic) BOOL shouldUseVisualStyleAnimationControllerForPresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultPreferredSmallContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultPreferredLargeContentSize;

+ (id)defaultPopoverMetrics;

@end
