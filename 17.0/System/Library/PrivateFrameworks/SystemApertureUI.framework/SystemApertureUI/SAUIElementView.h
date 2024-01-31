@class NSString, _SAUIProvidedViewContainerView, UIView;
@protocol SAUIElementViewProviding, SAUIElementViewDelegate;

@interface SAUIElementView : UIView <SAUIElementLayoutAxisObserving>

@property (retain, nonatomic) _SAUIProvidedViewContainerView *minimalTransformView;
@property (retain, nonatomic) _SAUIProvidedViewContainerView *leadingTransformView;
@property (retain, nonatomic) _SAUIProvidedViewContainerView *trailingTransformView;
@property (readonly, nonatomic) id<SAUIElementViewProviding> elementViewProvider;
@property (weak, nonatomic) id<SAUIElementViewDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_didLayoutResizedTransformView:(id)a0;
- (BOOL)_configureLeadingTransformViewIfNecessary;
- (BOOL)_configureMinimalTransformViewIfNecessary;
- (BOOL)_configureTrailingTransformViewIfNecessary;
- (BOOL)_configureTransformView:(id *)a0 ifNecessaryWithProvidedView:(id)a1 assertIfConfigurationRequired:(id /* block */)a2;
- (id)_effectiveMinimalView;
- (double)_paddingForView:(id)a0 fromProvider:(id)a1 inLayoutMode:(long long)a2;
- (id)initWithElementViewProvider:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })suggestedOutsetsForLayoutMode:(long long)a0 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
