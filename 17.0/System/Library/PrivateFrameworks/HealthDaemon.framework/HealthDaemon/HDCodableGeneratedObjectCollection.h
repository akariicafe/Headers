@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *medicationDoseEvents;

+ (Class)medicationDoseEventType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)count;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMedicationDoseEvent:(id)a0;
- (void)clearMedicationDoseEvents;
- (id)decodedObjects;
- (id)medicationDoseEventAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationDoseEventsCount;
- (BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)a0;

@end
