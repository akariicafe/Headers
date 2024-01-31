@class NSString, NSData;

@interface TRILogNamespace : PBCodable <NSCopying> {
    struct { unsigned char rolloutCount : 1; unsigned char hashIncludesDefaults : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasHashData;
@property (retain, nonatomic) NSData *hashData;
@property (nonatomic) BOOL hasHashIncludesDefaults;
@property (nonatomic) BOOL hashIncludesDefaults;
@property (readonly, nonatomic) BOOL hasLatestRolloutId;
@property (retain, nonatomic) NSString *latestRolloutId;
@property (nonatomic) BOOL hasRolloutCount;
@property (nonatomic) unsigned int rolloutCount;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
