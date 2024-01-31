@class PKPassTileMetadataVehicleFunction, NSString;

@interface PKPassTileMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)_createDictionaryMapForDictionaries:(id)a0;
+ (id)_createMetadataForType:(long long)a0 identifier:(id)a1;
+ (id)_createWithDictionary:(id)a0 privateDictionaryMap:(id)a1 privateDictionary:(id *)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0 privateDictionary:(id)a1;

@end
