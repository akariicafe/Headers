@class CKDistributedSiteIdentifier, NSNumber;

@interface CKVVectorTimestamp : NSObject <NSCopying>

@property (retain, nonatomic) CKDistributedSiteIdentifier *siteIdentfier;
@property (retain, nonatomic) NSNumber *sequence;
@property (nonatomic) unsigned char state;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiteIdentfier:(id)a0 sequence:(id)a1 state:(unsigned char)a2;

@end
