@class NSString, UIBezierPath, UIView, NSMutableArray, SUCellConfiguration;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    UIBezierPath *_clipPath;
    unsigned char _drawAsDisabled : 1;
    unsigned char _highlighted : 1;
    unsigned char _highlightsOnlyContentView : 1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned char _useSubviewLayout : 1;
}

@property (nonatomic) BOOL usesSubviews;
@property (nonatomic) int clipCorners;
@property (retain, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic, getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property (nonatomic) BOOL drawAsDisabled;
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)_clipPath;
- (void)_removeSubviewsForConfiguration;
- (void)_reloadSubviewsForConfiguration;
- (void)_updateDisabledStyleForSubviews;
- (id)_clippedImageForImage:(id)a0;
- (void)_reloadSubviewAlphasAnimated:(BOOL)a0;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)reloadView;
- (void)setUsesSubviews:(BOOL)a0 animated:(BOOL)a1;

@end
