@class MRUSystemOutputDeviceRouteController, NSString, MPVolumeController;
@protocol MRUSystemVolumeControllerDelegate;

@interface MRUSystemVolumeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver, MPVolumeControllerDelegate>

@property (readonly, nonatomic) MPVolumeController *systemVolumeController;
@property (readonly, nonatomic) MPVolumeController *primaryVolumeController;
@property (readonly, nonatomic) MPVolumeController *secondaryVolumeController;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUSystemVolumeControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)packageStateForVolumeValue:(float)a0;

- (void)decreaseVolume;
- (void)increaseVolume;
- (long long)typeForVolumeController:(id)a0;
- (void)setVolumeValue:(float)a0 forType:(long long)a1;
- (float)volumeValueForType:(long long)a0;
- (id)volumeControllerForType:(long long)a0;
- (void)updateVolumeControllers;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)volumeController:(id)a0 volumeControlCapabilitiesDidChange:(unsigned int)a1;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void).cxx_destruct;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (unsigned int)volumeCapabilitiesForType:(long long)a0;

@end
