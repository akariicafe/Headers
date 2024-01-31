@class NSString, WFConfiguredStaccatoAction;

@interface SBSystemAction : NSObject <BSDescriptionStreamable>

@property (readonly, nonatomic) WFConfiguredStaccatoAction *configuredAction;
@property (readonly, nonatomic, getter=isCameraCaptureAction) BOOL cameraCaptureAction;
@property (readonly, nonatomic) BOOL shouldBePerformedWhenSuppressed;
@property (readonly, nonatomic) BOOL shouldWakeScreenWhenPerformed;
@property (readonly, nonatomic) BOOL canBePerformedInSetupMode;
@property (readonly, nonatomic) NSString *hostBundleIdentifier;
@property (readonly, nonatomic) NSString *analyticsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithConfiguredAction:(id)a0;
- (id)newExecutor;

@end
