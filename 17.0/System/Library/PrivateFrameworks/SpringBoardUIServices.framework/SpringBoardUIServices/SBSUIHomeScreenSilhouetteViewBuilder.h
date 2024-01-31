@class SBSHomeScreenSilhouetteLayout;

@interface SBSUIHomeScreenSilhouetteViewBuilder : NSObject

@property (readonly, copy, nonatomic) SBSHomeScreenSilhouetteLayout *silhouetteLayout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) id /* block */ rootViewBuilder;
@property (copy, nonatomic) id /* block */ iconViewBuilder;
@property (copy, nonatomic) id /* block */ dockViewBuilder;
@property (nonatomic) BOOL includesDock;

- (id)makeIconView;
- (void).cxx_destruct;
- (id)buildView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSilhouetteLayout:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (id)makeDockView;
- (id)makeRootView;

@end
