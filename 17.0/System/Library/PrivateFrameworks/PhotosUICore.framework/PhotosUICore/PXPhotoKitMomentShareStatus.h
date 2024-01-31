@class PXCMMMomentShareInvitation;

@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus {
    PXCMMMomentShareInvitation *_invitation;
}

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)invitation;
- (void).cxx_destruct;
- (id)initWithPhotoKitMomentShare:(id)a0;
- (id)_createStatusProvider;
- (void)_prepareFetchResultsForPhotoLibrary:(id)a0;

@end
