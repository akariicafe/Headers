@class NSString;

@interface DIIdentityIntentToStore : NSObject <NSCopying>

@property (class, readonly, nonatomic) DIIdentityIntentToStore *willNotStoreIntent;
@property (class, readonly, nonatomic) DIIdentityIntentToStore *mayStoreIntent;

@property (readonly, nonatomic) NSString *identifier;

+ (id)mayStoreIntentForDays:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
