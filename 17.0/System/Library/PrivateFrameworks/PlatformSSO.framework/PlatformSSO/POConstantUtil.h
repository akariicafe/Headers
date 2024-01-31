@interface POConstantUtil : NSObject

+ (id)stringForUserAuthorizationMode:(long long)a0;
+ (struct __CFString { } *)algorithmForString:(id)a0;
+ (id)stringForDeviceAction:(long long)a0;
+ (id)stringForKeyType:(long long)a0;
+ (id)stringForLoginResult:(unsigned long long)a0;
+ (id)stringForLoginType:(unsigned long long)a0;
+ (id)stringForRegistrationStatus:(long long)a0;
+ (id)stringForTokenStatus:(long long)a0;
+ (id)stringForUserAction:(long long)a0;
+ (id)stringForUserState:(long long)a0;
+ (long long)userAuthorizationModeWithString:(id)a0;

@end
