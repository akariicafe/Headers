@class NSString, EFLocked, EMObjectID;
@protocol EFCancelable;

@interface EMDiagnosticsHelper : NSObject <EMDiagnosticInfoProviding>

@property (retain, nonatomic) id<EFCancelable> diagnosticInfoProviderToken;
@property (retain, nonatomic) EFLocked *providers;
@property (nonatomic) unsigned long long source;
@property (readonly, copy, nonatomic) EMObjectID *providerObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)registerDiagnosticFileProvider:(id)a0;
- (id)initWithDaemonInterface:(id)a0;
- (void)provideDiagnosticsAt:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
