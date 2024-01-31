@class NSString, NSData;

@interface _SFPBCardSearchMetadata : PBCodable <_SFPBCardSearchMetadata, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isServerEntity;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *viewConfigName;
@property (nonatomic) BOOL isFederatedDomainSearch;
@property (readonly, nonatomic) NSData *jsonData;
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

@end
