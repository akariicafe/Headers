@class NSString, NSArray, MTVisualStylingProvider, NSStringDrawingContext;

@interface NCNotificationListBaseContentView : UIView <MTVisualStylingProviding, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_updateVisualStylingOfImageView:(id)a0 ifSymbolImageWithStyle:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_updateTextAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (unsigned long long)_numberOfLinesForLabel:(id)a0 maximumNumberOfLines:(unsigned long long)a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_sizeMeasuringHeightForLabel:(id)a0 withNumberOfLines:(unsigned long long)a1;
- (void)_updateTextAttributesForLabel:(id)a0 withTextStyle:(id)a1 fontWeight:(double)a2 additionalTraits:(unsigned int)a3 maximumNumberOfLines:(unsigned long long)a4;

@end
