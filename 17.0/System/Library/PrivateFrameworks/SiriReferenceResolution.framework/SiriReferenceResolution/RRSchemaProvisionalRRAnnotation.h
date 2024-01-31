@class NSData;

@interface RRSchemaProvisionalRRAnnotation : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; unsigned char annotationAddedTimestampInSeconds : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned long long annotationAddedTimestampInSeconds;
@property (nonatomic) BOOL hasAnnotationAddedTimestampInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
