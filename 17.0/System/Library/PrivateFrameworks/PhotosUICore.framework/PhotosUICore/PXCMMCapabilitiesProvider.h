@class NSString, PHPhotoLibrary, CPLStatus;

@interface PXCMMCapabilitiesProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver> {
    PHPhotoLibrary *_photoLibrary;
    CPLStatus *_cplStatus;
    BOOL _isObserving;
}

@property (readonly) long long capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (void)statusDidChange:(id)a0;
- (void)_updateCapabilities;
- (id)initWithPhotoLibrary:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_handleCapabilities:(long long)a0 cplStatus:(id)a1 permanentlyUnavailable:(BOOL)a2;

@end
