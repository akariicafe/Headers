@interface DDRemoteAction : DDPreviewAction

+ (id)viewControllerProviderClass;

- (void)setPreviewMode:(BOOL)a0;
- (id)previewActions;
- (id)createViewController;

@end
