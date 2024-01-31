@class TIKeyboardCandidateResultSet, TIAutocorrectionList, TICandidateRequestToken;
@protocol TICandidateHandler;

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {
    unsigned long long _status;
}

@property (retain, nonatomic) TIAutocorrectionList *candidates;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
@property (readonly, nonatomic) id<TICandidateHandler> wrappedCandidateHandler;
@property (readonly, copy, nonatomic) id /* block */ candidateHandler;
@property (readonly, copy, nonatomic) id /* block */ candidateResultSetHandler;
@property (readonly, nonatomic) TICandidateRequestToken *requestToken;
@property (readonly, nonatomic) BOOL asynchronous;

- (void)close;
- (void)dealloc;
- (void)open;
- (void).cxx_destruct;
- (id)initWithHandlerBlock:(id /* block */)a0;
- (void)pushCandidates:(id)a0;
- (id)initWithResultSetHandlerBlock:(id /* block */)a0;
- (id)initWithWrappedCandidateHandler:(id)a0 handlerBlock:(id /* block */)a1 resultSetHandlerBlock:(id /* block */)a2;
- (id)initWithWrappedCandidateHandler:(id)a0 resultSetHandlerBlock:(id /* block */)a1;
- (void)pushCandidateResultSet:(id)a0;

@end
