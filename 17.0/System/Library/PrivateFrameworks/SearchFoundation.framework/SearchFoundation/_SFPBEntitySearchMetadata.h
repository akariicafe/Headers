@class NSString, NSData;

@interface _SFPBEntitySearchMetadata : PBCodable <_SFPBEntitySearchMetadata, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *entitySearchQuery;
@property (copy, nonatomic) NSString *tokenQuery;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (copy, nonatomic) NSString *viewConfigName;
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
