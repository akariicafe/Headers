@class NSString, NSMutableDictionary;

@interface ICUserNotificationBuilder : NSObject <NSCopying> {
    NSMutableDictionary *_userNotificationDictionary;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *otherButtonTitle;
@property (nonatomic) BOOL allowInCar;
@property (nonatomic) BOOL displaysActionButtonOnLockScreen;
@property (nonatomic) BOOL displaysAsTopMost;
@property (nonatomic) BOOL forcesModalAppearance;
@property (nonatomic) long long alertLevel;
@property (nonatomic) double timeoutInterval;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setBoolValue:(BOOL)a0 forKey:(struct __CFString { } *)a1;
- (struct __CFUserNotification { } *)createCFUserNotification;
- (id)initWithStoreDialog:(id)a0;

@end
