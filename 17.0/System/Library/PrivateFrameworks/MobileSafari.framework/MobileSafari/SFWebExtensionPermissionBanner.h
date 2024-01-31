@interface SFWebExtensionPermissionBanner : SFLinkBanner

@property (copy, nonatomic) id /* block */ dismissHandler;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)preferredButtonBackgroundColor;
- (id)preferredButtonTintColor;

@end
