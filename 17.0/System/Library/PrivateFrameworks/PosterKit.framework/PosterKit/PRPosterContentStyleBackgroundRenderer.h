@class UIColor, NSArray, _PRContentStyleGradientView, NSString, UIView;

@interface PRPosterContentStyleBackgroundRenderer : NSObject <PRPosterContentStyleRenderer>

@property (copy, nonatomic) UIColor *originalBackgroundColor;
@property (retain, nonatomic) NSArray *colorViews;
@property (retain, nonatomic) _PRContentStyleGradientView *gradientView;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)clearAnyPreviousStyle;
- (void)renderDiscreteColorStyle:(id)a0;
- (void)renderGradientStyle:(id)a0;

@end
