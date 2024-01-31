@class NSArray, NSMutableSet;

@interface FigDisplayMirroringChangeObserver : NSObject {
    struct OpaqueFigPlayer { } *_player;
    NSMutableSet *_clonedDisplays;
    NSMutableSet *_cloningSupportedDisplays;
    NSArray *_baseDisplayList;
    BOOL _needToRemoveObserversOnCADisplays;
    void /* function */ *_callback;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakCallbackContext;
}

- (id)init;
- (void)dealloc;
- (void)removeObserversOnCADisplays;
- (void)updatePlayerDisplayList;
- (void)removeReferenceToPlayer;
- (id)initWithPlayer:(struct OpaqueFigPlayer { } *)a0;
- (id)initWithCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeCallback;
- (void)setBaseDisplayList:(id)a0;

@end
