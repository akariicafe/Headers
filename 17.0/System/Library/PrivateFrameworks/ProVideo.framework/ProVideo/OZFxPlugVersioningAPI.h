@class NSString;

@interface OZFxPlugVersioningAPI : NSObject <FxVersioningAPI, PROAPIObject> {
    struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock *__ptr_; struct __shared_weak_count *__cntrl_; } _fxPlugLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)updateVersionAtCreation:(unsigned int)a0;
- (unsigned int)versionAtCreation;

@end
