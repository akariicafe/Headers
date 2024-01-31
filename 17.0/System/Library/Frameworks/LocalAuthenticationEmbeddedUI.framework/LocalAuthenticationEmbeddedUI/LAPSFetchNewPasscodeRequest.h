@class NSOrderedSet, LAPSPasscodeType;

@interface LAPSFetchNewPasscodeRequest : NSObject

@property (retain, nonatomic) LAPSPasscodeType *passcodeType;
@property (retain, nonatomic) NSOrderedSet *allowedPasscodeTypes;
@property (nonatomic) BOOL isPasscodeRecoverySupported;
@property (nonatomic) BOOL isPasscodeRecoveryEnabled;
@property (nonatomic) BOOL isPasscodeRecoveryRestricted;

- (id)init;
- (void).cxx_destruct;

@end
