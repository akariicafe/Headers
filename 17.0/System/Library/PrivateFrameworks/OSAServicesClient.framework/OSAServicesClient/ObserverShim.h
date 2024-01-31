@class NSString;
@protocol OSADiagnosticObserver;

@interface ObserverShim : NSObject <OSADiagnosticEventObserver, OSADiagnosticWriteObserver>

@property (readonly, weak, nonatomic) id<OSADiagnosticObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (void)didReceiveDiagnosticLog:(id)a0 ofType:(id)a1 details:(id)a2;
- (void)didWriteDiagnosticLog:(id)a0 ofType:(id)a1 toPath:(id)a2;
- (void)failedToWriteDiagnosticLog:(id)a0 ofType:(id)a1 error:(id)a2;
- (void)willWriteDiagnosticLog:(id)a0 ofType:(id)a1;

@end
