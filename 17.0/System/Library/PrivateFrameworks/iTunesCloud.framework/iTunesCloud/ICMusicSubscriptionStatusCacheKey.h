@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (id)init;
- (unsigned long long)hash;
- (id)stringRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0 requiringDSID:(BOOL)a1;
- (id)initWithStringRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentationIncludingDSID:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
