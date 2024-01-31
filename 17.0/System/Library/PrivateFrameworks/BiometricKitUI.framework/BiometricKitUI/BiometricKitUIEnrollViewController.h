@class BiometricKit, NSString, NSMutableDictionary;
@protocol BiometricKitUIEnrollResultDelegate;

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {
    NSMutableDictionary *_properties;
}

@property (retain, nonatomic) BiometricKit *biometricKit;
@property (weak, nonatomic) id<BiometricKitUIEnrollResultDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)cancelEnroll;
- (void)restartEnroll;
- (void)startEnroll;
- (void)startEnrollOperation;

@end
