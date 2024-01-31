@interface _PKProvisioningWatchUICoordinator : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ composer;
    void /* unknown type, empty encoding */ fieldsModel;
    void /* unknown type, empty encoding */ skipRequirements;
    void /* unknown type, empty encoding */ provisioningError;
    void /* unknown type, empty encoding */ provisionedPasses;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)continueWithFieldsModel:(id)a0;
- (id)initWithManualEntrySetupContext:(long long)a0 provisioningController:(id)a1 skipRequirements:(BOOL)a2;
- (id)initWithSetupContext:(long long)a0 provisioningController:(id)a1 credential:(id)a2;
- (void)preflightWithFieldModel:(id)a0 completion:(id /* block */)a1;

@end
