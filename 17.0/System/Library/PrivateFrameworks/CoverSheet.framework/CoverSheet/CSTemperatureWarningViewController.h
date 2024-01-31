@class NSString;
@protocol CSThermalStatusProviding;

@interface CSTemperatureWarningViewController : CSModalViewControllerBase <CSModalViewDelegate> {
    id<CSThermalStatusProviding> _thermalStatusProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)presentationPriority;
- (void)viewDidLoad;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (id)initWithThermalStatusProvider:(id)a0;

@end
