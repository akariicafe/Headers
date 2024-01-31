@class UICollectionView, _UIDragMovementCadenceSettings, _UIDragDestinationControllerSessionState, _UIVelocityIntegrator;

@interface _UIDragDestinationControllerReorderingState : NSObject

@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (nonatomic) long long reorderCount;
@property (nonatomic) double reorderBecamePossibleTime;
@property (nonatomic) long long dragMovementPhase;
@property (retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings;
@property (nonatomic) BOOL hasStartedInteractiveReorder;
@property (nonatomic) BOOL supportsLocalSessionReordering;
@property (readonly, nonatomic) BOOL hasPerformedReordering;

- (void)didBeginInteractiveReorder;
- (void)didReorder;
- (void)velocityExceededThreshold;
- (void)reorderingDidBecomePossible;
- (id)_reorderCadenceSettings;
- (void).cxx_destruct;
- (void)didEndInteractiveReorder;
- (id)initWithSessionState:(id)a0 collectionView:(id)a1;
- (BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)a0;
- (void)reorderResetToStartingLocation;

@end
