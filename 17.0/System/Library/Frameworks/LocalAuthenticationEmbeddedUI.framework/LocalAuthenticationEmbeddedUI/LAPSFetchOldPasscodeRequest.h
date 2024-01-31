@class LAPSPasscodeType;

@interface LAPSFetchOldPasscodeRequest : NSObject

@property (retain, nonatomic) LAPSPasscodeType *passcodeType;
@property (nonatomic) long long failedAttempts;
@property (nonatomic) long long backoffTimeout;

- (id)init;
- (void).cxx_destruct;

@end
