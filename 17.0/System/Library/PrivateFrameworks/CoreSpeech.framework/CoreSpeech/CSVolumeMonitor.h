@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)_notifyObserver:(id)a0 volumeDidChanged:(float)a1 forAudioCategory:(id)a2;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)systemControllerDied:(id)a0;
- (void)systemVolumeDidChange:(id)a0;
- (BOOL)_fetchSystemVolumeForCategory:(id)a0 usingSystemController:(id)a1 volume:(float *)a2;
- (float)alarmVolume;
- (float)_getNewSystemVolumesWithNotification:(id)a0 category:(id)a1;
- (void).cxx_destruct;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)_supportAVSystemVolumeFetch;
- (float)musicVolume;
- (void)startObservingSystemVolumes;
- (void)musicVolumeWithCompletion:(id /* block */)a0;

@end
