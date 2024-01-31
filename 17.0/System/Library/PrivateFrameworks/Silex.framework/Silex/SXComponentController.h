@class NSHashTable, NSString, NSArray, NSMutableDictionary, SXViewport, NSMutableArray, SXPresentationAttributes, SXLayoutBlueprint;
@protocol SXDOMObjectProviding, SXComponentViewEngine, SXComponentHosting;

@interface SXComponentController : NSObject <SXViewportChangeListener, SXComponentController>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *mappedComponentViews;
@property (retain, nonatomic) NSMutableArray *sortedComponentViews;
@property (retain, nonatomic) NSMutableArray *nestedComponentViews;
@property (nonatomic) BOOL isPresenting;
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
@property (retain, nonatomic) id<SXComponentViewEngine> componentViewEngine;
@property (weak, nonatomic) id<SXComponentHosting> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SXLayoutBlueprint *presentedBlueprint;
@property (readonly, nonatomic) NSArray *flattenedComponentViews;
@property (readonly, nonatomic) BOOL isPresented;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderBounds;
- (void)assistiveTechnologyStatusDidChange;
- (id)componentViewForIdentifier:(id)a0;
- (id)componentViewForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)componentViewForPoint:(struct CGPoint { double x0; double x1; })a0 inComponents:(id)a1;
- (id)componentViews;
- (id)componentViewsForRole:(int)a0;
- (id)componentViewsForRole:(int)a0 forLayoutBlueprint:(id)a1;
- (id)componentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fadeComponent:(id)a0 completion:(id /* block */)a1;
- (id)initWithViewport:(id)a0 DOMObjectProvider:(id)a1;
- (void)integrateBlueprint:(id)a0 withCompletion:(id /* block */)a1;
- (void)presentBlueprint:(id)a0 forParentComponentView:(id)a1 inHost:(id)a2;
- (id)presentComponentBlueprint:(id)a0 inHost:(id)a1 columnLayout:(id)a2;
- (void)presentComponentsInBlueprint:(id)a0;
- (void)provideInfosLayoutTo:(id)a0;
- (void)removeComponentsInLayoutBlueprint:(id)a0 removedFromLayoutBlueprint:(id)a1;
- (void)renderContentsIfNeededForComponents:(id)a0;
- (void)updatePresentationStateForNestedComponentView:(id)a0 presentationState:(long long)a1;
- (void)updatePresentationStateForNestedComponentViews:(id)a0 presentationState:(long long)a1;
- (void)updateVisibilityStatesForComponentViews:(id)a0;
- (void)updateVisibilityStatesForComponentViews:(id)a0 parentComponent:(id)a1 withOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)updateVisibilityStatesForComponentViews:(id)a0 toState:(long long)a1;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)viewport:(id)a0 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
