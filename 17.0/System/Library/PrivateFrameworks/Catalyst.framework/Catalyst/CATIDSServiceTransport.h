@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)connection:(id)a0 receivedData:(id)a1;
- (id)initWithConnection:(id)a0;
- (void)suspendConnection;
- (void).cxx_destruct;
- (void)serviceReceiveQueue;
- (id)name;
- (void)tryReportingInvalidation;
- (void)connectionClosed:(id)a0;
- (void)resumeConnection;
- (void)invalidateConnection;
- (id)operationToSendMessage:(id)a0;

@end
