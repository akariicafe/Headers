@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

@interface ICDocCamExtractedThumbnailContainerView : UIView

@property (weak, nonatomic) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityCustomActions;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)orderNextForAccessibility:(id)a0;
- (BOOL)orderPreviousForAccessibility:(id)a0;

@end
