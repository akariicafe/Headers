@class NSString;

@interface SIRINLUINTERNALSpanDataForNamedCaptureGroup : PBCodable <NSCopying> {
    struct { unsigned char targetNodeIdx : 1; unsigned char targetUdaIdx : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasTargetNodeIdx;
@property (nonatomic) int targetNodeIdx;
@property (nonatomic) BOOL hasTargetUdaIdx;
@property (nonatomic) int targetUdaIdx;

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
