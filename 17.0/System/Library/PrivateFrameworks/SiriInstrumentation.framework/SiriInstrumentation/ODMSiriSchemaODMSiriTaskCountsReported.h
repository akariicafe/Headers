@class ODMSiriSchemaODMSiriAggregationDimensions, NSData;

@interface ODMSiriSchemaODMSiriTaskCountsReported : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; unsigned char completedSiriTaskCount : 1; unsigned char failedSiriTaskCount : 1; unsigned char cancelledSiriTaskCount : 1; unsigned char completedUITaskCount : 1; } _has;
}

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) unsigned int completedSiriTaskCount;
@property (nonatomic) BOOL hasCompletedSiriTaskCount;
@property (nonatomic) unsigned int failedSiriTaskCount;
@property (nonatomic) BOOL hasFailedSiriTaskCount;
@property (nonatomic) unsigned int cancelledSiriTaskCount;
@property (nonatomic) BOOL hasCancelledSiriTaskCount;
@property (nonatomic) unsigned int completedUITaskCount;
@property (nonatomic) BOOL hasCompletedUITaskCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelledSiriTaskCount;
- (void)deleteCompletedSiriTaskCount;
- (void)deleteCompletedUITaskCount;
- (void)deleteDimensions;
- (void)deleteFailedSiriTaskCount;
- (void)deleteTaskType;

@end
