@class UIScrollView, NSString, SUUIClientContext, UIView, UILabel, UIImagePickerController;
@protocol SUUIProfileImagePickerDelegate;

@interface SUUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    SUUIClientContext *_clientContext;
    UIView *_contentView;
    UILabel *_descriptionLabel;
    BOOL _firstApperance;
    UIImagePickerController *_imagePicker;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id<SUUIProfileImagePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fixCropRect:(id)a0 forOriginalImage:(id)a1;

- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)_didCancel;
- (void)_presentImagePickerWithSourceType:(long long)a0;
- (void)_showImagePicker;
- (void)_showImageSourcePicker;
- (id)initWithClientContext:(id)a0;

@end
