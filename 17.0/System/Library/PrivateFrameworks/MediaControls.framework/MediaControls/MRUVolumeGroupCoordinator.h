@class NSArray, MRUVolumeController, NSString;

@interface MRUVolumeGroupCoordinator : NSObject <MRUVolumeControllerCoordinationDelegate>

@property (retain, nonatomic) NSArray *volumeScales;
@property (readonly, nonatomic) MRUVolumeController *mainVolumeController;
@property (retain, nonatomic) NSArray *volumeControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void).cxx_destruct;
- (void)equalizeVolumes;
- (void)beginEqualization;
- (void)finishEqualization;
- (id)initWithMainVolumeController:(id)a0;
- (BOOL)shouldAllowEqualization;
- (float)updateVolumeScales;

@end
