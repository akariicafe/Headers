@class NSString;
@protocol GKRandom, GKGameModel;

@interface GKHybridStrategist : NSObject <GKStrategist> {
    void *_hybridStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (nonatomic) unsigned long long explorationParameter;
@property (nonatomic) unsigned long long maxLookAheadDepth;
@property (retain, nonatomic) id<GKGameModel> gameModel;
@property (retain, nonatomic) id<GKRandom> randomSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)bestMoveForActivePlayer;
- (BOOL)validateGameModel:(id)a0;
- (BOOL)validateRandomSource;

@end
