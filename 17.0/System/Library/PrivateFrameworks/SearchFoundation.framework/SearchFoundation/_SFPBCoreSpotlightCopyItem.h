@class NSArray, NSString, NSData;

@interface _SFPBCoreSpotlightCopyItem : PBCodable <_SFPBCoreSpotlightCopyItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *dataProviderTypeIdentifiers;
@property (copy, nonatomic) NSArray *fileProviderTypeIdentifiers;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier;
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
- (void)addDataProviderTypeIdentifiers:(id)a0;
- (void)addFileProviderTypeIdentifiers:(id)a0;
- (void)clearDataProviderTypeIdentifiers;
- (void)clearFileProviderTypeIdentifiers;
- (id)dataProviderTypeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)dataProviderTypeIdentifiersCount;
- (id)fileProviderTypeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)fileProviderTypeIdentifiersCount;

@end
