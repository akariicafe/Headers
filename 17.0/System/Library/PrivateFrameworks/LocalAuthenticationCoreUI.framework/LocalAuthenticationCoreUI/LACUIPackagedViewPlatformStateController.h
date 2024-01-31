@class NSString, CAStateController;
@protocol LACUIPackagedViewPlatformStateControllerDelegate;

@interface LACUIPackagedViewPlatformStateController : NSObject <CAStateControllerDelegate, LACUIPackagedViewPlatformStateController> {
    CAStateController *_stateController;
}

@property (weak, nonatomic) id<LACUIPackagedViewPlatformStateControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)state;
- (void)stateController:(id)a0 transitionDidStart:(id)a1 speed:(float)a2;
- (void)stateController:(id)a0 didSetStateOfLayer:(id)a1;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(BOOL)a2;
- (void)setState:(id)a0 speed:(double)a1;
- (BOOL)hasState:(id)a0;

@end
