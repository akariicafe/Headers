@class PUParallaxLayerLayoutInfo, NSMutableDictionary, NSDictionary, NSString, UILabel, CALayer, PUParallaxLayerStackViewModel;

@interface PUParallaxDebugInfoView : PUParallaxLayerView <PXChangeObserver> {
    PUParallaxLayerLayoutInfo *_currentLayoutInfo;
}

@property (readonly, weak, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (readonly, nonatomic) NSMutableDictionary *rectViewsByIdentifier;
@property (readonly, nonatomic) UILabel *debugHUDLabel;
@property (readonly, nonatomic) CALayer *maskLayer;
@property (copy, nonatomic) NSDictionary *additionalDebugInfo;
@property (copy, nonatomic) NSString *debugHUDString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)layoutWithInfo:(id)a0;
- (void)_invalidateDebugHUDString;
- (void)_layoutWithCurrentLayoutInfo;
- (id)_rectViewForIdentifier:(id)a0;
- (void)_updateDebugHUDString;
- (id)currentLayoutInfo;
- (void)displayAdditionalDebugInfo:(id)a0;
- (void)setCurrentLayoutInfo:(id)a0;

@end
