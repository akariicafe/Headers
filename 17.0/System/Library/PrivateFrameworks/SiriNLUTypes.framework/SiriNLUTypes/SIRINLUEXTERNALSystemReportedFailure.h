@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALSystemReportedFailure : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *reason;
@property (readonly, nonatomic) BOOL hasTask;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *task;

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
