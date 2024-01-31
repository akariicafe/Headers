@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALUUID, SIRICOMMONDoubleValue;

@interface SIRINLUEXTERNALTask : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId;
@property (readonly, nonatomic) BOOL hasTask;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *task;
@property (readonly, nonatomic) BOOL hasScore;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score;

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
