@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {
    struct { unsigned char cancelLocation : 1; unsigned char reportConcernLocation : 1; unsigned char resultType : 1; } _has;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasReportConcernLocation;
@property (nonatomic) int reportConcernLocation;
@property (nonatomic) BOOL hasCancelLocation;
@property (nonatomic) int cancelLocation;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
