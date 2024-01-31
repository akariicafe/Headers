@interface LAPSPasscodeChangeSystemBuilder : NSObject

+ (id)_persistence;
+ (id)_passcodeChangeSystemWithPersistence:(id)a0;
+ (id)_passcodeRecoverySystemWithPersistence:(id)a0;
+ (id)_passcodeStubbedSystem;
+ (BOOL)_useStubbedAdapter;
+ (id)passcodeChangeSystem;
+ (id)passcodeRecoverySystem;

@end
