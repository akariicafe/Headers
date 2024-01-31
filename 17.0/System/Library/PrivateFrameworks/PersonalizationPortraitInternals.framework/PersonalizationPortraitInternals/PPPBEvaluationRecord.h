@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {
    struct { unsigned char deviceId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) long long deviceId;

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
