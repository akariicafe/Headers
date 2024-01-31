@protocol GTMTLDiagnosticsServiceObserver;

@interface GTMTLDiagnosticsServiceReplyStream : GTXPCDispatcher <GTMTLDiagnosticsServiceObserverXPCDispatcher> {
    id<GTMTLDiagnosticsServiceObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyCommandBufferIssue_:(id)a0 replyConnection:(id)a1;
- (void)notifyDiagnosticsIssue_:(id)a0 replyConnection:(id)a1;

@end
