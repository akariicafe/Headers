@class NSString, NSError;

@interface SBKResponseStatus : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSString *consoleDescription;
@property (readonly, nonatomic) NSError *requestError;
@property (readonly, nonatomic) BOOL isSuccess;
@property (readonly, nonatomic) BOOL isRecoverable;
@property (readonly, nonatomic) BOOL isError;
@property (readonly, nonatomic) BOOL shouldFileRadar;
@property (readonly, nonatomic) BOOL isGenericError;
@property (readonly, nonatomic) BOOL isUnsupportedClient;
@property (readonly, nonatomic) BOOL isAuthenticationError;
@property (readonly, nonatomic) BOOL isValidationError;
@property (readonly, nonatomic) BOOL isPuntedError;

+ (id)responseStatusForStatusCodeNumber:(id)a0;

- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 isRecoverable:(BOOL)a1 isError:(BOOL)a2 consoleDescription:(id)a3 shouldFileRadar:(BOOL)a4;

@end
