@class NSString, BMHomeKitBase, NSArray;

@interface BMHomeKitClientActionSet : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMHomeKitBase *base;
@property (readonly, nonatomic) NSString *actionSetUniqueIdentifier;
@property (readonly, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) NSArray *associatedAccessoryUniqueIdentifiers;
@property (readonly, nonatomic) NSString *actionSetName;
@property (readonly, nonatomic) NSString *homeName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBase:(id)a0 actionSetUniqueIdentifier:(id)a1 actionSetType:(id)a2 associatedAccessoryUniqueIdentifiers:(id)a3 actionSetName:(id)a4 homeName:(id)a5;
- (id)_associatedAccessoryUniqueIdentifiersJSONArray;

@end
