@class NSDictionary;

@interface EKSyncError : EKObject

@property (readonly, nonatomic) unsigned long long errorType;
@property (readonly, nonatomic) unsigned long long errorCode;
@property (readonly, nonatomic) NSDictionary *userInfo;

+ (Class)frozenClass;
+ (id)augmentSyncErrorUserInfo:(id)a0 for:(id)a1;
+ (id)knownIdentityKeysForComparison;

- (void)setUserInfoData:(id)a0;
- (id)userInfoData;
- (void)setErrorCode:(unsigned long long)a0;
- (void)setUserInfo:(id)a0;
- (id)initWithCalendarError:(unsigned long long)a0 userInfo:(id)a1;
- (id)initWithAccountError:(unsigned long long)a0 userInfo:(id)a1;
- (id)initWithCalendarItemError:(unsigned long long)a0 userInfo:(id)a1;
- (void)setErrorType:(unsigned long long)a0;

@end
