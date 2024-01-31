@class NSArray, NSMutableDictionary, NSMutableArray, NSNumber;

@interface MKLaneDirectionCollisionCalculator : NSObject {
    NSMutableDictionary *_collisionsForDirection;
    NSMutableArray *_directions;
    NSNumber *_directionWithMostCollisions;
}

@property (readonly, nonatomic) BOOL hasCollisions;
@property (readonly, nonatomic) BOOL hasDirectionWithMaxCollisions;
@property (readonly, nonatomic) NSArray *directions;

- (void).cxx_destruct;
- (void)_recalculateCollisions;
- (id)initWithDirections:(id)a0;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)a0;
- (void)removeNextDirectionWithCollisions;

@end
