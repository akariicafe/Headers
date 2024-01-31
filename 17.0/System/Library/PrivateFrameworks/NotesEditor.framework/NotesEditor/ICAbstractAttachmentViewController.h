@class UIColor, ICSearchResultRegexMatchFinder;

@interface ICAbstractAttachmentViewController : UIViewController

@property (readonly, nonatomic) BOOL isInResponderChain;
@property (readonly) BOOL forManualRendering;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)prepareForPrinting;
- (void)zoomFactorOrInsetsDidChange;

@end
