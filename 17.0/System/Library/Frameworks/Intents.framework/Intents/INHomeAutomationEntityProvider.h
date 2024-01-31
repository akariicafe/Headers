@class NSArray, NSString;

@interface INHomeAutomationEntityProvider : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *roomNames;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSArray *zoneNames;
@property (readonly, copy, nonatomic) NSArray *accessoryNames;
@property (readonly, copy, nonatomic) NSArray *serviceNames;
@property (readonly, copy, nonatomic) NSArray *serviceGroups;
@property (readonly, copy, nonatomic) NSArray *intentFromEntities;
@property (readonly, copy, nonatomic) NSString *intentDeviceQuantifier;
@property (readonly, copy, nonatomic) NSString *destinationDeviceId;
@property (readonly, copy, nonatomic) NSString *intentDeviceType;
@property (readonly, copy, nonatomic) NSString *intentPlaceHint;
@property (readonly, copy, nonatomic) NSString *intentReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRoomNames:(id)a0 homeName:(id)a1 zoneNames:(id)a2 accessoryNames:(id)a3 serviceNames:(id)a4 serviceGroups:(id)a5 intentFromEntities:(id)a6 intentDeviceQuantifier:(id)a7 destinationDeviceId:(id)a8 intentDeviceType:(id)a9 intentPlaceHint:(id)a10 intentReference:(id)a11;

@end
