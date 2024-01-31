@interface LAPSPasscodePersistenceErrorBuilder : NSObject

+ (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)genericErrorWithDebugDescription:(id)a0;
+ (id)genericErrorWithUserInfo:(id)a0;
+ (id)invalidPasscodeError;
+ (BOOL)isInvalidPasscodeError:(id)a0;

@end
