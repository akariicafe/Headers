@interface SLGNotificationActivatedLoggerRegistration : NSObject

@property (nonatomic) int beginToken;
@property (nonatomic) int endToken;

+ (id)registrationWithBeginToken:(int)a0 endToken:(int)a1;

@end
