@class NSString, FPRTCReportingSessionManager, NSMutableDictionary;
@protocol FPRTCReportingObserver;

@interface FPRTCReportingSession : NSObject {
    NSString *_providerID;
    NSString *_providerVersion;
    FPRTCReportingSessionManager *_backingManager;
    id<FPRTCReportingObserver> _observer;
    NSString *_trialExperiment;
    NSString *_trialTreatment;
    NSMutableDictionary *_categoryHooks;
}

- (id)description;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (void)setObserver:(id)a0;
- (void).cxx_destruct;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3;
- (BOOL)flushMessagesSynchronouslyWithError:(id *)a0;
- (void)executeModifyDecoratedPayloadHook:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3 decoratedPayload:(id)a4;
- (id)initWithProviderID:(id)a0 version:(id)a1 manager:(id)a2;
- (void)setModifyDecoratedPayloadHook:(id /* block */)a0 forCategory:(unsigned long long)a1;
- (id)truncateProviderVersion:(id)a0;

@end
