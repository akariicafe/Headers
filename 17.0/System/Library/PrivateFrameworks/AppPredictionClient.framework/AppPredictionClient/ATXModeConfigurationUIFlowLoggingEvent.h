@class NSUUID, NSArray, NSString, NSDate;

@interface ATXModeConfigurationUIFlowLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSUUID *dndModeUUID;
@property (readonly, nonatomic) int modeConfigurationEntityType;
@property (readonly, nonatomic) int modeConfigurationUI;
@property (readonly, nonatomic) NSArray *suggestedEntityIdentifiers;
@property (readonly, nonatomic) NSArray *candidateEntityIdentifiers;
@property (readonly, nonatomic) NSArray *previousEntityIdentifiers;
@property (readonly, nonatomic) NSArray *currentEntityIdentifiers;
@property (readonly, nonatomic) long long modeConfigurationType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)jsonRawData;
- (id)initFromJSON:(id)a0;
- (id)json;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initWithDndModeUUID:(id)a0 modeConfigurationUI:(int)a1 modeConfigurationEntityType:(int)a2 modeConfigurationType:(long long)a3 suggestedEntityIdentifiers:(id)a4 candidateEntityIdentifiers:(id)a5 previousEntityIdentifiers:(id)a6 currentEntityIdentifiers:(id)a7 eventDate:(id)a8;

@end
