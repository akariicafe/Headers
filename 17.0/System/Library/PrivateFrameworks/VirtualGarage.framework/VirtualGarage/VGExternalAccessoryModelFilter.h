@class NSArray;

@interface VGExternalAccessoryModelFilter : NSObject

@property (retain, nonatomic) NSArray *modelIdAllowlist;
@property (retain, nonatomic) NSArray *denylist;

- (id)init;
- (void)_initializeAllowAndDenylists;
- (void).cxx_destruct;
- (BOOL)allowsVehicleWithModelId:(id)a0 firmwareId:(id)a1 year:(id)a2 model:(id)a3;

@end
