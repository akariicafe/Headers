@interface _UIPencilPreferences : NSObject {
    long long _cachedPreferredTapAction;
    BOOL _cachedPrefersPencilOnlyDrawing;
    BOOL _cachedHasSeenPencilPairingUI;
    BOOL _cachedHasUsedPassivePencil;
}

@property (class, readonly, nonatomic) long long preferredTapAction;
@property (class, readonly, nonatomic) BOOL hasSeenPencilPairingUI;
@property (class, nonatomic) BOOL hasUsedPassivePencil;
@property (class, nonatomic) BOOL prefersPencilOnlyDrawing;

+ (id)sharedPreferences;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_hasSeenPencilPairingUI;
- (void)_hasSeenPencilPairingUIDidChange;
- (BOOL)_hasUsedPassivePencil;
- (void)_hasUsedPassivePencilDidChange;
- (long long)_preferredTapAction;
- (void)_preferredTapActionDidChange;
- (BOOL)_prefersPencilOnlyDrawing;
- (void)_prefersPencilOnlyDrawingDidChange;
- (void)_setHasUsedPassivePencil:(BOOL)a0;
- (void)_setPrefersPencilOnlyDrawing:(BOOL)a0;

@end
