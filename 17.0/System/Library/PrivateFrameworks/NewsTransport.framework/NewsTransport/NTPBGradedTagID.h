@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying> {
    struct { unsigned char grade : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) int grade;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
