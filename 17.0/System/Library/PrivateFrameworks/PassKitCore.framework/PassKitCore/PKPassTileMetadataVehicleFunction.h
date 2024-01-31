@class NSArray;

@interface PKPassTileMetadataVehicleFunction : PKPassTileMetadata

@property (copy, nonatomic) NSArray *vehicleFunctions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0 privateDictionary:(id)a1;

@end
