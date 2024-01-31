@class PRSceneViewController, PRSPosterPath, _EXExtensionIdentity;
@protocol BSInvalidatable;

@interface ExtensionItem : NSObject {
    _EXExtensionIdentity *_extension;
    PRSceneViewController *_viewController;
    PRSPosterPath<BSInvalidatable> *_tmpPoster;
    long long _activationStyle;
}

+ (id)itemWithExtension:(id)a0 activationStyle:(long long)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (void)invalidate;
- (id)activate;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (void)deactivate;
- (BOOL)wasEverActivated;

@end
