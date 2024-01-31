@class CSImportExtension, NSString, CSIndexExtensionRequestHandler;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol>

@property (retain, nonatomic) CSIndexExtensionRequestHandler *requestHandler;
@property (retain, nonatomic) CSImportExtension *importExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)getLastUpdateTimeWithCompletionHandler:(id /* block */)a0;
- (id)handleSingleFileURLRequest:(id)a0 providerIdentifier:(id)a1 index:(id)a2 error:(out id *)a3;
- (id)hostContext;
- (void)performJob:(id)a0 acknowledgementHandler:(id /* block */)a1;

@end
