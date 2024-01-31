@class NSString;
@protocol GKRandom, GKGameModel;

@interface GKMinmaxStrategist : NSObject <GKStrategist> {
    void *_cppMinmax;
}

@property (nonatomic) long long maxLookAheadDepth;
@property (retain, nonatomic) id<GKGameModel> gameModel;
@property (retain, nonatomic) id<GKRandom> randomSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)bestMoveForActivePlayer;
- (id)bestMoveForPlayer:(id)a0;
- (id)randomMoveForPlayer:(id)a0 fromNumberOfBestMoves:(long long)a1;

@end
