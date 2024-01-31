@class NSString, NSArray, INCarHeadUnit;

@interface INCar : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *powerPerConnectors;
@property (readonly, copy, nonatomic) NSString *carIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *year;
@property (readonly, copy, nonatomic) NSString *make;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, copy, nonatomic) INCarHeadUnit *headUnit;
@property (readonly, copy, nonatomic) NSArray *supportedChargingConnectors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_cacheableObjects;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_colorDictionaryRepresentation;
- (id)initWithCarIdentifier:(id)a0 displayName:(id)a1 year:(id)a2 make:(id)a3 model:(id)a4 color:(struct CGColor { } *)a5 headUnit:(id)a6 supportedChargingConnectors:(id)a7;
- (id)initWithCarIdentifier:(id)a0 displayName:(id)a1 year:(id)a2 make:(id)a3 model:(id)a4 color:(struct CGColor { } *)a5 headUnit:(id)a6 supportedChargingConnectors:(id)a7 powerPerConnectors:(id)a8;
- (id)maximumPowerForChargingConnectorType:(id)a0;
- (void)setMaximumPower:(id)a0 forChargingConnectorType:(id)a1;

@end
