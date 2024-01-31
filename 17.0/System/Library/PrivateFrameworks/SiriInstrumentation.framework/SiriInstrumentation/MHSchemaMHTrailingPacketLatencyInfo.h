@class NSData;

@interface MHSchemaMHTrailingPacketLatencyInfo : SISchemaInstrumentationMessage {
    struct { unsigned char num : 1; unsigned char max : 1; unsigned char min : 1; unsigned char avg : 1; unsigned char median : 1; unsigned char p95 : 1; unsigned char std : 1; } _has;
}

@property (nonatomic) unsigned int num;
@property (nonatomic) BOOL hasNum;
@property (nonatomic) unsigned long long max;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) unsigned long long min;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) unsigned long long avg;
@property (nonatomic) BOOL hasAvg;
@property (nonatomic) unsigned long long median;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) unsigned long long p95;
@property (nonatomic) BOOL hasP95;
@property (nonatomic) unsigned long long std;
@property (nonatomic) BOOL hasStd;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAvg;
- (void)deleteMax;
- (void)deleteMedian;
- (void)deleteMin;
- (void)deleteNum;
- (void)deleteP95;
- (void)deleteStd;

@end
