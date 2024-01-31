@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SASActivePresentationInstrumentationSender : SASActivationInstrumentationSender {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) long long aggregateRequestState;
@property (retain, nonatomic) NSMutableArray *queuedMesasges;

- (void)barrierWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_canInstrumentForRequestState:(long long)a0;
- (void)_instrumentActivationMessage:(id)a0;
- (void)_requestStateDidChange:(long long)a0;
- (void)aggregatePresentationRequestStateDidChange:(long long)a0;
- (id)initWithAnalyticsStream:(id)a0;
- (void)instrumentActivationMessage:(id)a0;

@end
