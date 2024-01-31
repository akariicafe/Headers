@class NSData, NSString;

@interface TSAuthFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

@property (retain) NSData *externalizedContext;
@property BOOL isLocalConvertFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (id)initWithExternalizedContext:(id)a0 isLocalConvertFlow:(BOOL)a1;
- (id)nextViewControllerFrom:(id)a0;

@end
