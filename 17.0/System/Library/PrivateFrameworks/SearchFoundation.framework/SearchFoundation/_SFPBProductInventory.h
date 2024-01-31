@class NSString, _SFPBDate, NSData;

@interface _SFPBProductInventory : PBCodable <_SFPBProductInventory, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *storeId;
@property (nonatomic) int availabilityStatus;
@property (nonatomic) float distance;
@property (nonatomic) int distanceUnit;
@property (retain, nonatomic) _SFPBDate *timestamp;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeAddress;
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
