@class NSSet, FCBundleSubscription;

@interface FCPersonalizationUserProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSSet *autofavoritedTagIDs;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, nonatomic) NSSet *readArticleIDs;
@property (readonly, nonatomic) NSSet *listenedArticleIDs;
@property (readonly, nonatomic) NSSet *seenArticleIDs;
@property (readonly, nonatomic) FCBundleSubscription *bundleSubscription;

- (id)initWithSubscribedTagIDs:(id)a0 mutedTagIDs:(id)a1 autofavoritedTagIDs:(id)a2 purchasedTagIDs:(id)a3 bundleSubscription:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubscribedTagIDs:(id)a0 mutedTagIDs:(id)a1 autofavoritedTagIDs:(id)a2 purchasedTagIDs:(id)a3 readArticleIDs:(id)a4 listenedArticleIDs:(id)a5 seenArticleIDs:(id)a6 bundleSubscription:(id)a7;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
