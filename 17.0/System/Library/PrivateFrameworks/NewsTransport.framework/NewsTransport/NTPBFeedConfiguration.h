@class NSString;

@interface NTPBFeedConfiguration : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFreeAFeedID;
@property (retain, nonatomic) NSString *freeAFeedID;
@property (readonly, nonatomic) BOOL hasFreeBFeedID;
@property (retain, nonatomic) NSString *freeBFeedID;
@property (readonly, nonatomic) BOOL hasFreeCFeedID;
@property (retain, nonatomic) NSString *freeCFeedID;
@property (readonly, nonatomic) BOOL hasPaidAFeedID;
@property (retain, nonatomic) NSString *paidAFeedID;
@property (readonly, nonatomic) BOOL hasPaidBFeedID;
@property (retain, nonatomic) NSString *paidBFeedID;
@property (readonly, nonatomic) BOOL hasPaidCFeedID;
@property (retain, nonatomic) NSString *paidCFeedID;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
