@class NSArray, PHPhotoLibrary, NSString;

@interface PXAddUnverifiedPeopleActionPerformer : PXActionPerformer <PHPickerViewControllerDelegate>

@property (retain, nonatomic) NSArray *selectedPeopleToAdd;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_createPersonWithPickerResults:(id)a0;
- (id)initWithPresentationEnvironment:(id)a0 photoLibrary:(id)a1;

@end
