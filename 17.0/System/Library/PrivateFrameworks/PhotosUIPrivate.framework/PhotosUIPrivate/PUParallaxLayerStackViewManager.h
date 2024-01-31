@class PUParallaxDebugInfoView, NSMutableDictionary, PUParallaxVideoLayerView, NSArray, NSString, PUParallaxLayerStackViewModel;

@interface PUParallaxLayerStackViewManager : NSObject <PXChangeObserver, PXSettingsKeyObserver>

@property (readonly, weak, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (readonly, nonatomic) NSMutableDictionary *viewsByLayerIdentifier;
@property (retain, nonatomic) PUParallaxDebugInfoView *debugInfoView;
@property (readonly, nonatomic) PUParallaxVideoLayerView *videoLayerView;
@property (readonly, nonatomic) NSArray *createdLayerViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_layoutViews;
- (id)viewForLayerID:(id)a0;
- (BOOL)_debugColorsEnabled;
- (id)_layerLayoutInfoForViewModel:(id)a0;
- (void)_layoutLayerView:(id)a0;
- (void)_updateViewContents;
- (void)layoutViewsAnimated:(id /* block */)a0;
- (void)releaseVideoLayerView;
- (id)viewForLayer:(id)a0;

@end
