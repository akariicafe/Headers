@protocol LAPSPasscodePersistence;

@interface LAPSNewPasscodeService : NSObject

@property (readonly, nonatomic) id<LAPSPasscodePersistence> persistence;

- (id)initWithPersistence:(id)a0;
- (id)passcodeType;
- (void).cxx_destruct;
- (id)allowedPasscodeTypes;
- (void)verifyPasscode:(id)a0 completion:(id /* block */)a1;

@end
