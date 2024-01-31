@class NTKPigmentEditOptionArray, NSString, UICollectionView, NTKFace, NSArray, NTKFaceView;

@interface _NTKPigmentAddController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIAdaptivePresentationControllerDelegate> {
    NTKFace *_face;
    NTKFaceView *_faceView;
    NSString *_slot;
    id /* block */ _willExitHandler;
    UICollectionView *_collectionView;
    NSArray *_sections;
    NTKPigmentEditOptionArray *_availablePigments;
    NTKPigmentEditOptionArray *_addedPigments;
    NTKPigmentEditOptionArray *_removedPigments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)collectionView;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)_collectionViewLayout;
- (void)_donePressed;
- (void)_callWillExitHandlerWithChanges:(BOOL)a0;
- (void)_dismissWithChanges:(BOOL)a0;
- (void)_handleOptionsChangedNotification;
- (id)_pigmentForIndexPath:(id)a0;
- (void)_setupPigments;
- (void)_updateSelections;
- (id)initWithFace:(id)a0 faceView:(id)a1 slot:(id)a2 willExitHandler:(id /* block */)a3;

@end
