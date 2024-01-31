@class RRSchemaProvisionalRRGroupIdentifier, NSString, USOSchemaUSOGraph, NSArray, NSData;

@interface RRSchemaProvisionalRRAnnotatedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char saliencyScore : 1; unsigned char saliencyComputedAtTimestampInSeconds : 1; unsigned char hasReference : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph;
@property (nonatomic) BOOL hasUsoGraph;
@property (copy, nonatomic) NSString *swiftClassName;
@property (nonatomic) BOOL hasSwiftClassName;
@property (retain, nonatomic) RRSchemaProvisionalRRGroupIdentifier *group;
@property (nonatomic) BOOL hasGroup;
@property (copy, nonatomic) NSArray *annotations;
@property (nonatomic) float saliencyScore;
@property (nonatomic) BOOL hasSaliencyScore;
@property (nonatomic) unsigned long long saliencyComputedAtTimestampInSeconds;
@property (nonatomic) BOOL hasSaliencyComputedAtTimestampInSeconds;
@property (nonatomic) BOOL hasReference;
@property (nonatomic) BOOL hasHasReference;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (void)addAnnotations:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearAnnotations;
- (id)annotationsAtIndex:(unsigned long long)a0;
- (unsigned long long)annotationsCount;

@end
