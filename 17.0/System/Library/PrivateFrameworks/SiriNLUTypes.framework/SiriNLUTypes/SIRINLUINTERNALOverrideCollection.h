@class NSString, NSMutableArray;

@interface SIRINLUINTERNALOverrideCollection : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; } _has;
}

@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) BOOL hasAssetId;
@property (retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *parseOverrides;
@property (retain, nonatomic) NSMutableArray *componentOverrides;

+ (Class)componentOverridesType;
+ (Class)parseOverridesType;

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
- (void)addComponentOverrides:(id)a0;
- (void)addParseOverrides:(id)a0;
- (void)clearComponentOverrides;
- (void)clearParseOverrides;
- (id)componentOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)componentOverridesCount;
- (id)parseOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)parseOverridesCount;

@end
