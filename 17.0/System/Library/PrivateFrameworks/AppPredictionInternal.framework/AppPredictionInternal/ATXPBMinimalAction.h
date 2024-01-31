@class NSString;

@interface ATXPBMinimalAction : PBCodable <NSCopying> {
    struct { unsigned char paramHash : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasActionType;
@property (retain, nonatomic) NSString *actionType;
@property (nonatomic) BOOL hasParamHash;
@property (nonatomic) unsigned long long paramHash;

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
