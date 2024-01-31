@class TICandidateRequestToken, TIKeyboardInputManagerBase, TIKeyboardState;
@protocol TIKeyboardInputManagerLogging, TIClientProxy;

@interface TIStreamingCandidateHandler : NSObject <TICandidateHandler> {
    unsigned long long _status;
    BOOL _didCallHandler;
    TIKeyboardInputManagerBase *_inputManager;
}

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (weak, nonatomic) id<TIKeyboardInputManagerLogging> logger;
@property (readonly, nonatomic) id<TIClientProxy> clientProxy;
@property (readonly, copy, nonatomic) id /* block */ candidateHandler;
@property (readonly, copy, nonatomic) id /* block */ candidateResultSetHandler;
@property (readonly, nonatomic) TICandidateRequestToken *requestToken;
@property (readonly, nonatomic) BOOL asynchronous;

- (void)close;
- (void)dealloc;
- (void)open;
- (void).cxx_destruct;
- (void)pushCandidates:(id)a0;
- (id)initWithClientProxy:(id)a0 keyboardState:(id)a1 requestToken:(id)a2 logger:(id)a3 inputManager:(id)a4 candidateHandler:(id /* block */)a5;
- (id)initWithClientProxy:(id)a0 keyboardState:(id)a1 requestToken:(id)a2 logger:(id)a3 inputManager:(id)a4 candidateHandler:(id /* block */)a5 candidateResultSetHandler:(id /* block */)a6;
- (id)initWithClientProxy:(id)a0 keyboardState:(id)a1 requestToken:(id)a2 logger:(id)a3 inputManager:(id)a4 candidateResultSetHandler:(id /* block */)a5;
- (void)pushCandidateResultSet:(id)a0;

@end
