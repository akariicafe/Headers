@class NSString;

@interface SFSystemAlert : NSObject {
    struct __CFUserNotification { } *_cfNotification;
    struct __CFRunLoopSource { } *_cfRunloopSource;
    NSString *_title;
    NSString *_message;
    NSString *_affirmativeButtonTitle;
    NSString *_negativeButtonTitle;
    NSString *_alternateButtonTitle;
}

@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)_displayNameForBundleID:(id)a0;
+ (id)readingListAlertForDomain:(id)a0 appBundleID:(id)a1;
+ (id)searchEngineSettingAlert;
+ (id)sharedTabGroupsManateeAlert;
+ (id)webAuthenticationAlertForDomain:(id)a0 appBundleID:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTitle:(id)a0 message:(id)a1 affirmativeButtonTitle:(id)a2 negativeButtonTitle:(id)a3;
- (id)initWithTitle:(id)a0 message:(id)a1 affirmativeButtonTitle:(id)a2 negativeButtonTitle:(id)a3 alternateButtonTitle:(id)a4;
- (void)scheduleWithCompletionBlock:(id /* block */)a0;

@end
