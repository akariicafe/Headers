@class NSString, DYTransportSource, DYBaseSocketTransport, NSObject;
@protocol DYCaptureAPISupport, OS_dispatch_source;

@interface DYBaseDaemon : NSObject {
    DYTransportSource *_source;
    NSObject<OS_dispatch_source> *_process_source;
    BOOL _invalidated;
}

@property (retain, nonatomic) DYBaseSocketTransport *transport;
@property (nonatomic) int inferiorPid;
@property (retain, nonatomic) NSString *inferiorName;
@property (nonatomic) BOOL ownsInferior;
@property (retain, nonatomic) id<DYCaptureAPISupport> captureApiSupport;
@property (nonatomic) BOOL capturingInferior;
@property (nonatomic) BOOL shouldLoadCapture;
@property (nonatomic) BOOL shouldLoadDiagnostics;
@property (readonly, nonatomic) BOOL isAppleInternal;

- (id)init;
- (void)run;
- (void)dealloc;
- (void)setApplications:(id)a0;
- (void)invalidate;
- (void)handleMessage:(id)a0;
- (void)terminate:(int)a0;
- (void)observeInferior;
- (id)getApplications;
- (id)captureAPISupportForAPI:(unsigned int)a0;
- (BOOL)createInferiorTransportAndSetEnvironment:(id)a0 uniqueIdentifier:(id)a1 error:(id *)a2;
- (BOOL)createInferiorTransportAndSetEnvironment:(id)a0 withAPI:(unsigned int)a1 uniqueIdentifier:(id)a2 error:(id *)a3;
- (BOOL)launchInferior:(id)a0 finalEnvironment:(id *)a1 error:(id *)a2;

@end
