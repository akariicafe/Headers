@class HDCodableMedicalIDData, NSMutableArray;

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMedicalIDData;
@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSMutableArray *medicalIDLogs;

+ (Class)medicalIDLogsType;

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
- (void)addMedicalIDLogs:(id)a0;
- (void)clearMedicalIDLogs;
- (id)medicalIDLogsAtIndex:(unsigned long long)a0;
- (unsigned long long)medicalIDLogsCount;

@end
