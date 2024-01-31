@class NSString;

@interface SSVPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cloudID;
@property (readonly, copy, nonatomic) NSString *lyricsID;
@property (readonly, nonatomic) long long purchasedAdamID;
@property (readonly, nonatomic) long long radioAdamID;
@property (readonly, nonatomic) long long equivalencySourceAdamID;
@property (readonly, nonatomic) long long subscriptionAdamID;
@property (readonly, nonatomic) long long tvShowPurchasedAdamID;
@property (readonly, nonatomic) long long tvShowSubscriptionAdamID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
