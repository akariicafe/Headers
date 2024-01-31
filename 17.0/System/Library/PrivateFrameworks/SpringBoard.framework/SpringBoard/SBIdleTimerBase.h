@class NSString, NSHashTable;

@interface SBIdleTimerBase : NSObject <SBIdleTimerActivation, SBIdleTimer>

@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_logExpirationTimeout:(double)a0;
- (void)reset;
- (void)_makeObserversPerformSelector:(SEL)a0;
- (id)succinctDescriptionBuilder;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (id)stateCaptureDescriptionWithMultilinePrefix:(id)a0;
- (void)removeIdleTimerObserver:(id)a0;
- (BOOL)isEqualToTimer:(id)a0;
- (void)removeAllIdleTimerObservers;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)conformsToSBIdleTimerActivation;
- (void)addIdleTimerObserver:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
