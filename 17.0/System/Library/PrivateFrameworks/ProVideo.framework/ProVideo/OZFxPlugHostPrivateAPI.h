@class NSString;

@interface OZFxPlugHostPrivateAPI : NSObject <PROAPIObject, FxHostPrivateAPI, FxRenderModelAPIPrivate> {
    struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock *__ptr_; struct __shared_weak_count *__cntrl_; } _fxPlugLock;
    NSString *_pluginUUID;
    unsigned long long _sessionID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)navigateToTime:(union { double x0; struct *x1; })a0;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundle:(id)a3;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundleWithIdentifier:(id)a3;
- (id)URLForHostResource:(id)a0 withExtension:(id)a1 subDirectory:(id)a2 inBundleWithURL:(id)a3;
- (id)URLForMediaFolder;
- (float)blendingGamma;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (BOOL)giveEffectUIFocus;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock *x0; struct __shared_weak_count *x1; })a0;
- (void)restartConnection:(id)a0 forPlugin:(id)a1 session:(unsigned long long)a2;

@end
