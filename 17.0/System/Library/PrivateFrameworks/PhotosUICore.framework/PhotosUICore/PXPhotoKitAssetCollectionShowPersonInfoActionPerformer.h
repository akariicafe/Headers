@class NSString, CNContactViewController;

@interface PXPhotoKitAssetCollectionShowPersonInfoActionPerformer : PXPhotoKitAssetCollectionActionPerformer <CNContactPickerDelegate>

@property (weak, nonatomic) CNContactViewController *pushedContactViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionTypeForPerson:(id)a0 outContact:(id *)a1;
+ (void)_createPersonInfoActionForPerson:(id)a0 traitCollection:(id)a1 handler:(id /* block */)a2 completion:(id /* block */)a3;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createStandardActionForAssetCollectionReference:(id)a0 withInput:(id)a1 handler:(id /* block */)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_handleUnlinkContactButton:(id)a0;
- (void)_performUserInteractionTaskWithType:(long long)a0 contact:(id)a1;
- (void)_popContactViewController;
- (void)_showContactDetailViewControllerForContact:(id)a0;
- (void)_showContactPicker;
- (void)_showNamingBootstrap;
- (void)_unlinkContact;

@end
