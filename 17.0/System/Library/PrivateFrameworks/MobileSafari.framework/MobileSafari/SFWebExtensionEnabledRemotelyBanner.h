@class NSArray;

@interface SFWebExtensionEnabledRemotelyBanner : SFLinkBanner {
    NSArray *_remotelyEnabledExtensions;
}

- (id)initWithExtension:(id)a0;
- (void)addExtension:(id)a0;
- (void).cxx_destruct;
- (id)preferredButtonBackgroundColor;
- (id)preferredButtonTintColor;

@end
