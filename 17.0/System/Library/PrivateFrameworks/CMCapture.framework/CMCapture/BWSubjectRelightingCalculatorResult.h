@class NSObject;
@protocol OS_dispatch_group;

@interface BWSubjectRelightingCalculatorResult : NSObject {
    BOOL _relightingRequired;
    float _curveParameter;
    NSObject<OS_dispatch_group> *_group;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) BOOL relightingRequired;
@property (readonly) float curveParameter;

- (id)init;
- (void)dealloc;
- (void)_completeWithRelightingRequired:(BOOL)a0 curveParameter:(float)a1;
- (BOOL)waitForResult;

@end
