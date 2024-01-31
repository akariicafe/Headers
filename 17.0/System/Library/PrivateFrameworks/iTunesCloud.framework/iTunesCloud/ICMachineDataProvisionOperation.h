@class ICADIProvisionSession;

@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession *_provisionSession;
}

- (void)execute;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;

@end
