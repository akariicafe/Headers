@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *podcastFeedURLIdentifier;

- (id)stringValue;
- (id)initWithLongLong:(long long)a0;
- (unsigned long long)hash;
- (long long)longLongValue;
- (id)numberValue;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumber:(id)a0;
- (id)initWithPodcastFeedURL:(id)a0;

@end
