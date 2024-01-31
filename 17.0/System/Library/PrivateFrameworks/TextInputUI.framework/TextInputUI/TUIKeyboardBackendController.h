@class NSHashTable, TIKeyboardInputManagerStub, NSObject;
@protocol OS_dispatch_source;

@interface TUIKeyboardBackendController : NSObject {
    BOOL _applicationIsInBackground;
    BOOL _needsRestoreSupplementalLexicons;
}

@property (retain, nonatomic) TIKeyboardInputManagerStub *inputManager;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *supplementalLexiconWatchdog;
@property (readonly, nonatomic) NSHashTable *supplementalLexicons;

+ (id)sharedInstance;

- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 requestToken:(id)a2 completionHandler:(id /* block */)a3;
- (void)stickerWithIdentifier:(id)a0 stickerRoles:(id)a1 completionHandler:(id /* block */)a2;
- (void)applicationWillEnterForeground;
- (void)removeUISupplementalLexicon:(id)a0;
- (void)handleKeyboardInput:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)addUISupplementalLexicon:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)performHitTestForTouchEvents:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)_restoreSupplementalLexiconsIfNeeded;

@end
