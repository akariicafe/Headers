@class NSString, NSData;

@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage {
    struct { unsigned char ns_relative_to_boot : 1; } _has;
}

@property (copy, nonatomic) NSString *ref_id;
@property (nonatomic) BOOL hasRef_id;
@property (nonatomic) unsigned long long ns_relative_to_boot;
@property (nonatomic) BOOL hasNs_relative_to_boot;
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
- (void)deleteNs_relative_to_boot;
- (void)deleteRef_id;

@end
