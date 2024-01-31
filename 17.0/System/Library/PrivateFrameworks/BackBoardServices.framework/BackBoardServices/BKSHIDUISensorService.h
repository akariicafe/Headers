@class BKSHIDUISensorCharacteristics, BSCompoundAssertion, BKSHIDUISensorMode;

@interface BKSHIDUISensorService : NSObject {
    BSCompoundAssertion *_modeAssertion;
    BKSHIDUISensorMode *_prevailingMode;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BKSHIDUISensorCharacteristics *sensorCharacteristics;

+ (id)sharedInstance;

- (id)init;
- (id)requestUISensorMode:(id)a0;
- (void).cxx_destruct;
- (void)_lock_setupAssertion;

@end
