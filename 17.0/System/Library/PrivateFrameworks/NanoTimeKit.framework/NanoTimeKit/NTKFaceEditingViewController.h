@class NTKFace, NTKFaceEditView;

@interface NTKFaceEditingViewController : UIViewController {
    NTKFaceEditView *_editView;
}

@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) long long currentEditMode;

- (void)dealloc;
- (void)activate;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (void)faceColorEditOptionsChanged;
- (void)willActivate;
- (void)willDeactivate;

@end
