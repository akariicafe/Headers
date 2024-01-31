@interface LKRecoverEMCSOperation : LKOperation

@property (readonly, nonatomic) long long recoveredKeychainItemCount;

- (id)init;
- (id)dictionary;
- (void)setRecoveredKeychainItemCount:(long long)a0;

@end
