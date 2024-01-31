@class NSArray, PUSessionInfo, NSString, PHPhotoLibrary, PXLibraryFilterState, PXExtendedTraitCollection;

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver>

@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly, nonatomic) NSArray *providers;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTraitCollection:(id)a0 sessionInfo:(id)a1 photoLibrary:(id)a2 libraryFilterState:(id)a3;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)removeCachedProviders;
- (id)gadgetProviders;

@end
