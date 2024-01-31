@class NSString, NSMutableSet;
@protocol SBFBDisplayManagerTransformUpdating, BSInvalidatable;

@interface SBDisplayTransformerRegistry : NSObject <FBSDisplayTransformer, EXBDisplayTransformerRegistry> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_transformers;
    id<BSInvalidatable> _stateCaptureToken;
    id<SBFBDisplayManagerTransformUpdating> _overrideTransformUpdater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_initWithOverrideTransformUpdater:(id)a0;
- (id)addTransformer:(id)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_lock_description;
- (id)transformUpdater;
- (id)transformDisplayConfiguration:(id)a0;

@end
