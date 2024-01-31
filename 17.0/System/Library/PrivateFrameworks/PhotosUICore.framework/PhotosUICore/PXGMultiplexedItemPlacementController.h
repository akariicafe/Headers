@class NSArray, NSString;
@protocol PXGItemPlacementController;

@interface PXGMultiplexedItemPlacementController : NSObject <PXGItemPlacementController_Internal, PXGItemPlacementController>

@property (readonly, nonatomic) NSArray *itemPlacementControllers;
@property (readonly, nonatomic) id<PXGItemPlacementController> mainItemPlacementController;
@property (readonly, nonatomic) BOOL isIndirectItemPlacementController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemPlacementControllerForItemPlacementControllers:(id)a0;

- (id)init;
- (void)setPlacementOverride:(id)a0 forItemReference:(id)a1;
- (id)placementInContext:(id)a0 forItemReference:(id)a1;
- (void).cxx_destruct;
- (id)initWithItemPlacementControllers:(id)a0;

@end
