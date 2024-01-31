@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

@interface UIKeyboardInputManagerMux : NSObject {
    NSMutableArray *_clients;
}

@property (retain, nonatomic) id<TIKeyboardInputManager> systemInputManager;
@property (readonly, nonatomic) BOOL hasSystemInputManager;
@property (retain, nonatomic) id<_UIIVCResponseDelegateImpl> responseDelegate;

+ (id)sharedInstance;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)removeAllClients;
- (void)addClient:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeClient:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)_systemHasKbd;
- (void).cxx_destruct;
- (void)updateClientResponseDelegatesWithDelegate:(id)a0;
- (void)releaseConnectedClients;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setSystemInputManagerFromTextInputTraits:(id)a0 autofillMode:(long long)a1;

@end
