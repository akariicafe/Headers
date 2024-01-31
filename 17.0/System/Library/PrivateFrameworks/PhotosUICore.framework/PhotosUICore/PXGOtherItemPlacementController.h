@class NSString;
@protocol PXGItemPlacementController;

@interface PXGOtherItemPlacementController : NSObject <PXGItemPlacementController_Internal, PXGItemPlacementController>

@property (readonly, nonatomic) id<PXGItemPlacementController> originalItemPlacementController;
@property (readonly, nonatomic) id originalItemReference;
@property (readonly, nonatomic) BOOL isIndirectItemPlacementController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setPlacementOverride:(id)a0 forItemReference:(id)a1;
- (id)placementInContext:(id)a0 forItemReference:(id)a1;
- (void).cxx_destruct;
- (id)initWithOriginalItemPlacementController:(id)a0 originalItemReference:(id)a1;

@end
