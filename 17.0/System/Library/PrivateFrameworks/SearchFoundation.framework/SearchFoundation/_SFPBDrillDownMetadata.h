@class _SFPBCardSearchMetadata, NSString, NSArray, NSData, _SFPBCardMetadata, _SFPBEntitySearchMetadata;

@interface _SFPBDrillDownMetadata : PBCodable <_SFPBDrillDownMetadata, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cardIdentifier;
@property (copy, nonatomic) NSArray *cardIdentifiers;
@property (copy, nonatomic) NSArray *cardDomains;
@property (copy, nonatomic) NSString *qtype;
@property (copy, nonatomic) NSString *viewConfigName;
@property (retain, nonatomic) _SFPBCardMetadata *cardOnlyMetadata;
@property (retain, nonatomic) _SFPBEntitySearchMetadata *entitySearchOnlyMetadata;
@property (retain, nonatomic) _SFPBCardSearchMetadata *cardSearchMetadata;
@property (retain, nonatomic) _SFPBEntitySearchMetadata *entitySearchMetadata;
@property (copy, nonatomic) NSString *debugParams;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCardDomains:(id)a0;
- (void)addCardIdentifiers:(id)a0;
- (id)cardDomainsAtIndex:(unsigned long long)a0;
- (unsigned long long)cardDomainsCount;
- (id)cardIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)cardIdentifiersCount;
- (void)clearCardDomains;
- (void)clearCardIdentifiers;

@end
