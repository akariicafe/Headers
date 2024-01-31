@class NSString;

@interface ACMAppleConnect : NSObject {
    id _private;
}

@property id delegate;
@property (readonly) NSString *version;
@property (nonatomic) unsigned long long logLevel;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)private;
- (void)cancelRequests;
- (void)authenticate:(id)a0;
- (void)setupComponents;
- (void)authenticateWithRequest:(id)a0 password:(id)a1;
- (void)handleMemoryWarningNotification:(id)a0;
- (id)hideAppleConnectSignInDialog;
- (void)verifyServiceTicket:(id)a0;

@end
