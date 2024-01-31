@class NSString, IDSDaemonRequestTimer;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer *_requestTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)a0 status:(long long)a1 abusive:(BOOL)a2 delay:(double)a3 withError:(id)a4;
- (id)initWithRequestTimer:(id)a0;

@end
