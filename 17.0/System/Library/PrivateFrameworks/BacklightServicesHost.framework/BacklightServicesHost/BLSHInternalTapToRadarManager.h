@class BLSHInternalTapToRadarDialog, NSObject;
@protocol OS_os_log;

@interface BLSHInternalTapToRadarManager : NSObject {
    BLSHInternalTapToRadarDialog *_ttrDialog;
    NSObject<OS_os_log> *_log;
}

+ (id)sharedTapToRadarManager;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)requestTapToRadar:(id)a0 log:(id)a1 completion:(id /* block */)a2;

@end
