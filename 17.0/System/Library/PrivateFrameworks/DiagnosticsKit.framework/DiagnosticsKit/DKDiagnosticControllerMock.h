@class NSString, NSProgress, DKDiagnosticContextMock, NSLock, DKMutableDiagnosticResult;

@interface DKDiagnosticControllerMock : NSObject <DKDiagnostic_Internal, DKDiagnosticMock>

@property (retain, nonatomic) DKDiagnosticContextMock *context;
@property (retain, nonatomic) NSLock *finishedLock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) Class inputsClass;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSetup) BOOL setup;
@property (retain, nonatomic) DKMutableDiagnosticResult *result;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)beginRequestWithInputsClass:(Class)a0 predicates:(id)a1 specifications:(id)a2 parameters:(id)a3 completion:(id /* block */)a4;

@end
