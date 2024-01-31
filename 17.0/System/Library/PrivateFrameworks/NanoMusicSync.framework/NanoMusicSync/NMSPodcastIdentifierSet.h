@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *storeID;
@property (readonly, nonatomic) NSString *feedURL;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreID:(id)a0 feedURL:(id)a1;
- (BOOL)isEqualToPodcastIdentifierSet:(id)a0;

@end
