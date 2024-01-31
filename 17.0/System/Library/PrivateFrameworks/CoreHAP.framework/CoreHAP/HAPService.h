@class CBService, NSArray, NSString, HAPAccessory, NSNumber;

@interface HAPService : HMFObject <NSCopying, HMFMerging>

@property (retain, nonatomic, setter=setCBService:) CBService *cbService;
@property (retain, nonatomic) NSArray *linkedServices;
@property (nonatomic) unsigned long long serviceProperties;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPAccessory *accessory;
@property (retain, nonatomic) NSArray *characteristics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hap2_mergeServices:(id)a0 discoveredServices:(id)a1 mergedServices:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)mergeObject:(id)a0;
- (BOOL)shouldMergeObject:(id)a0;
- (BOOL)isEqualToService:(id)a0;
- (id)propertiesDescription;
- (BOOL)_validateServiceCharacteristics;
- (BOOL)_updateCharacteristic:(id)a0;
- (BOOL)_validateMandatoryCharacteristics;
- (id)characteristicsOfType:(id)a0;
- (BOOL)hap2_mergeWithService:(id)a0;
- (id)initWithType:(id)a0 instanceID:(id)a1;
- (id)initWithType:(id)a0 instanceID:(id)a1 parsedCharacteristics:(id)a2 serviceProperties:(unsigned long long)a3 linkedServices:(id)a4;
- (BOOL)updateAndValidateCharacteristics;

@end
