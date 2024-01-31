@class NSString;

@interface ACHCodableAchievementProgressUpdate : PBCodable <NSCopying> {
    struct { unsigned char goalQuantityValue : 1; unsigned char progressQuantityValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (nonatomic) BOOL hasProgressQuantityValue;
@property (nonatomic) double progressQuantityValue;
@property (readonly, nonatomic) BOOL hasProgressQuantityUnit;
@property (retain, nonatomic) NSString *progressQuantityUnit;
@property (nonatomic) BOOL hasGoalQuantityValue;
@property (nonatomic) double goalQuantityValue;
@property (readonly, nonatomic) BOOL hasGoalQuantityUnit;
@property (retain, nonatomic) NSString *goalQuantityUnit;

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
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
