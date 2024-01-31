@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying> {
    struct { unsigned char dateGenerated : 1; } _has;
}

@property (nonatomic) BOOL hasDateGenerated;
@property (nonatomic) double dateGenerated;
@property (readonly, nonatomic) BOOL hasDiagnosticInfo;
@property (retain, nonatomic) NSString *diagnosticInfo;

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
