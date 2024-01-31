@class PXGadgetSpec, NSString, PXGadgetSpecManager;

@interface PXFeedHorizontalGadgetViewLayoutSpecManager : PXFeedViewLayoutSpecManager <PXChangeObserver>

@property (readonly, nonatomic) PXGadgetSpecManager *gadgetSpecManager;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_invalidateSpec;
- (void)_invalidateGadgetSpec;
- (void)_updateGadgetSpec;
- (void)_updateSpec;
- (id)initWithGadgetSpec:(id)a0 style:(long long)a1;
- (id)initWithGadgetSpecManager:(id)a0 style:(long long)a1;

@end
