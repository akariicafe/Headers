@class NSString, PXObservable, PXCPLPhotoLibrarySource, PHPhotoLibrary;
@protocol PXCPLStatusProvider;

@interface PXCPLStatusProviderMonitor : PXObservable <PXChangeObserver> {
    PXCPLPhotoLibrarySource *_photoLibrarySource;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXObservable<PXCPLStatusProvider> *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_updateStatusProvider;
- (void)setStatusProvider:(id)a0;

@end
