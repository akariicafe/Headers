@class DIIdentityIntentToStore;

@interface PKIdentityIntentToStore : NSObject <NSCopying>

@property (class, readonly, nonatomic) PKIdentityIntentToStore *willNotStoreIntent;
@property (class, readonly, nonatomic) PKIdentityIntentToStore *mayStoreIntent;

@property (retain) DIIdentityIntentToStore *wrapped;

+ (id)mayStoreIntentForDays:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDIIdentityIntentToStore;
- (id)initWithDIIdentityIntentToStore:(id)a0;

@end
