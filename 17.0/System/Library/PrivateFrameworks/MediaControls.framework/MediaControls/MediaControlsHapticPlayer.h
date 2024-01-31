@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

@interface MediaControlsHapticPlayer : NSObject

@property (retain, nonatomic) CHHapticEngine *engine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> expandedButtonChangedPlayer;

- (void)setupExpandedButtonChanged;
- (void)dealloc;
- (void)tearDown;
- (void)checkError:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)expandedButtonChanged;

@end
