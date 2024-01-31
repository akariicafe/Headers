@class NSString, UMUser, CSUserPictureView;

@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <CSEventHandling> {
    UMUser *_user;
    CSUserPictureView *_userPictureView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUserPictureSupported;
+ (Class)viewClass;

- (long long)presentationPriority;
- (long long)presentationType;
- (id)view;
- (void)viewDidLoad;
- (long long)presentationStyle;
- (void)aggregateAppearance:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleEvent:(id)a0;

@end
