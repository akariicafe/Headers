@class NSString, STUserDeviceState, NSData;

@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (class, readonly) NSString *serializableClassName;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) STUserDeviceState *userDeviceState;
@property (nonatomic) BOOL installedLocally;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSData *iconData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)bundleIdentifiersInstalledForDSID:(id)a0 inContext:(id)a1 error:(id *)a2;

- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)a0;
- (void)setUserDeviceState:(id)a0;

@end
