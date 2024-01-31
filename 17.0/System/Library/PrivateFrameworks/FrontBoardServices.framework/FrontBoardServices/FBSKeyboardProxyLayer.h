@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;

- (id)initWithLevel:(double)a0 keyboardOwner:(id)a1;

@end
