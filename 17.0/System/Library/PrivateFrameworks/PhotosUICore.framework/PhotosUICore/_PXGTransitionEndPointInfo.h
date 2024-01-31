@class PXGItemPlacement, PXGItemPlacementContext, PXGViewCoordinator;
@protocol PXGItemPlacementController;

@interface _PXGTransitionEndPointInfo : NSObject

@property (retain, nonatomic) PXGViewCoordinator *tungstenViewCoordinator;
@property (retain, nonatomic) id<PXGItemPlacementController> itemPlacementController;
@property (retain, nonatomic) PXGItemPlacementContext *placementContext;
@property (retain, nonatomic) PXGItemPlacement *originalItemPlacement;
@property (retain, nonatomic) id itemReference;

- (void).cxx_destruct;

@end
