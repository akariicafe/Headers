@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject

@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) long long lastFailedMessageDate;
@property (nonatomic, getter=isShowingFailure) BOOL showingFailure;
@property (nonatomic, getter=isUnexpectedlyLoggedOut) BOOL unexpectedlyLoggedOut;
@property (nonatomic) BOOL addedObserverForUnexpectedlyLoggedOut;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;

+ (id)sharedInstance;
+ (id)_accountsArrayForServiceIMessage;
+ (BOOL)_isTryingToLogin;
+ (BOOL)_isUserIntentNotLoggedOut;
+ (BOOL)_iMessageEnabled;
+ (BOOL)_isUsableSendingForAccount:(id)a0;
+ (BOOL)_iMessageFailedAccountIsIrreparable;

- (void)_handleUnexpectedLogout;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (id)init;
- (BOOL)isInAppleStoreDemoMode;
- (void)dealloc;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)a0;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (void)_saveFailureDate:(long long)a0;
- (void)_postBadgeNumber:(id)a0;
- (void)_clearFailureBadge;
- (void)_checkIfUnexpectedlyLoggedOut;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)a0;
- (BOOL)_shouldShowFailureString;
- (id)initWithMessageStore:(id)a0;
- (long long)_savedFailureDate;
- (void).cxx_destruct;
- (void)_postBadgeString:(id)a0;
- (void)_stopSuppressingSound;
- (void)_updateBadge;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (BOOL)_isUnexpectedlyLogOutValue;
- (void)_cacheFailureDate:(long long)a0;

@end
