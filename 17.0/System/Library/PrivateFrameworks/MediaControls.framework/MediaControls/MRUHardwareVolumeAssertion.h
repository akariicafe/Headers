@class NSString, MRUHardwareVolumeController;
@protocol MPVolumeControllerDataSource;

@interface MRUHardwareVolumeAssertion : NSObject <BSInvalidatable>

@property (weak, nonatomic) MRUHardwareVolumeController *hardwareVolumeController;
@property (weak, nonatomic) id<MPVolumeControllerDataSource> volumeDataSource;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithHardwareVolumeController:(id)a0 volumeDataSource:(id)a1 reason:(id)a2;

@end
