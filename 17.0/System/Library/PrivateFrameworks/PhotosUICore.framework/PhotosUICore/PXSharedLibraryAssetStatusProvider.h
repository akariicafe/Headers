@class NSString, PXSharedLibraryStatusProvider, PHAsset, PHPhotoLibrary;

@interface PXSharedLibraryAssetStatusProvider : PXObservable <PXPhotoLibraryUIChangeObserver, PXChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;
}

@property (nonatomic) BOOL hasSharedLibraryOrPreview;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *localizedContributionStatus;
@property (retain, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_primaryFont;
+ (id)_appendMediaTypeForStatusStringFormat:(id)a0 mediaType:(long long)a1;
+ (id)_applyAttributesToTitle:(id)a0;
+ (id)_displayNameFont;
+ (id)_libraryNameFont;
+ (id)_localizedContributionStatusForContributor:(id)a0 status:(unsigned long long)a1 assetMediaType:(long long)a2;
+ (id)localizedContributionStatusStringForParticipants:(id)a0 assetMediaType:(long long)a1 showOnlyOneNameToShortenStatus:(BOOL)a2;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void).cxx_destruct;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)_updateProperties;
- (void)_setPhotoLibrary:(id)a0;
- (id)attributedLocalizedContributionStatusForPreferredWidth:(double)a0 maximumNumberOfLines:(double)a1;
- (id)fetchParticipants;

@end
