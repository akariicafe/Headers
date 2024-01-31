@class NSString;
@protocol HMDAccessoryFirmwareUpdatePolicy;

@interface HMDAccessoryFirmwareUpdateApplyTask : HMDAccessoryFirmwareUpdateTask <HMFLogging> {
    BOOL _userInitiated;
}

@property (readonly, weak) id<HMDAccessoryFirmwareUpdatePolicy> policy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (BOOL)isUserInitiated;
- (id)criteria;
- (void).cxx_destruct;
- (BOOL)shouldRun;
- (BOOL)_isApplyAllowedByPolicy;
- (id)initWithSession:(id)a0 profile:(id)a1 policy:(id)a2 userInitiated:(BOOL)a3 delay:(BOOL)a4;

@end
