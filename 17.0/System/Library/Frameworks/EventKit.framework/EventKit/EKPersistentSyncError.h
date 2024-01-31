@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setUserInfoData:(id)a0;
- (int)errorCode;
- (id)userInfoData;
- (void)setErrorCode:(int)a0;
- (int)entityType;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
