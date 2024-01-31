@class NSArray, NSData;

@interface LRSchemaLRWindow : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (copy, nonatomic) NSArray *activeRedactionPolicies;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)activeRedactionPoliciesAtIndex:(unsigned long long)a0;
- (unsigned long long)activeRedactionPoliciesCount;
- (void)addActiveRedactionPolicies:(int)a0;
- (void)clearActiveRedactionPolicies;
- (void)deleteActiveRedactionPolicies;
- (void)deleteEndTimeInNs;
- (void)deleteStartTimeInNs;

@end
