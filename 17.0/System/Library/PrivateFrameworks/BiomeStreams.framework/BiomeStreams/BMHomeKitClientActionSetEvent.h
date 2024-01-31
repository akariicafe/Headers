@class NSString, BMHomeKitClientBase, NSArray;

@interface BMHomeKitClientActionSetEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *actionSetName;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base;
@property (readonly, copy, nonatomic) NSString *actionSetUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (readonly, copy, nonatomic) NSArray *associatedAccessoryUniqueIdentifiers;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBase:(id)a0 actionSetUniqueIdentifier:(id)a1 actionSetType:(id)a2 associatedAccessoryUniqueIdentifiers:(id)a3 actionSetName:(id)a4 homeName:(id)a5;

@end
