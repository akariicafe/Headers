@class NSString;

@interface LACustomPasswordVerificationAction : NSObject {
    long long _type;
    NSString *_customPassword;
}

@property (class, readonly) LACustomPasswordVerificationAction *terminateAction;
@property (class, readonly) LACustomPasswordVerificationAction *userCancelAction;

+ (id)submitCustomPasswordAction:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
