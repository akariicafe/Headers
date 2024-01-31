@class NSError;

@interface LAPSErrorBuilder : NSObject

@property (class, readonly, nonatomic) NSError *userCanceledError;

+ (id)genericError;
+ (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)_errorWithCode:(long long)a0 debugDescription:(id)a1;
+ (id)_genericErrorWithDebugDescription:(id)a0;
+ (id)_genericErrorWithUserInfo:(id)a0;
+ (id)clientCanceledError;
+ (id)genericErrorWithDebugDescription:(id)a0;
+ (id)genericErrorWithUnderlyingError:(id)a0;
+ (id)invalidPasscodeErrorWithFailedAttemptsCount:(long long)a0;
+ (id)invalidPasscodeErrorWithFailedAttemptsCount:(long long)a0 backoffTimeout:(long long)a1;
+ (id)newPasscodeDoesNotMeetRequirementsErrorWithLocalizedDescription:(id)a0;
+ (id)newPasscodeIsTooEasyError;
+ (id)tooManyAttemptsError;

@end
