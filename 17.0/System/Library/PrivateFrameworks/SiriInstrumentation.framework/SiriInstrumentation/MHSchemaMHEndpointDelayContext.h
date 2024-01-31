@class NSData;

@interface MHSchemaMHEndpointDelayContext : SISchemaInstrumentationMessage {
    struct { unsigned char speakingStartInNs : 1; unsigned char speakingEndInNs : 1; unsigned char endpointDelayInNs : 1; unsigned char endpointModelDelayInNs : 1; } _has;
}

@property (nonatomic) unsigned long long speakingStartInNs;
@property (nonatomic) BOOL hasSpeakingStartInNs;
@property (nonatomic) unsigned long long speakingEndInNs;
@property (nonatomic) BOOL hasSpeakingEndInNs;
@property (nonatomic) unsigned long long endpointDelayInNs;
@property (nonatomic) BOOL hasEndpointDelayInNs;
@property (nonatomic) unsigned long long endpointModelDelayInNs;
@property (nonatomic) BOOL hasEndpointModelDelayInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointDelayInNs;
- (void)deleteEndpointModelDelayInNs;
- (void)deleteSpeakingEndInNs;
- (void)deleteSpeakingStartInNs;

@end
