@class NSUUID, NSString, NSArray, NSDate, NSDictionary, _HMContext, HMService, NSNumber, HMCharacteristicMetadata;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HMService *service;
@property (copy, nonatomic) NSUUID *cachedServiceUniqueIdentifier;
@property (copy, nonatomic) NSString *characteristicType;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) BOOL requiresDeviceUnlock;
@property (copy, nonatomic) id value;
@property (nonatomic) BOOL notificationEnabledByThisClient;
@property (nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (copy, nonatomic) NSDate *valueUpdatedTime;
@property (copy, nonatomic) NSDate *notificationEnabledTime;
@property BOOL hasAuthorizationData;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) HMCharacteristicMetadata *metadata;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)__localizedDescriptionForCharacteristicType:(id)a0;
+ (id)_characteristicTypeAsString:(id)a0;
+ (id)characteristicWithCharacteristicReference:(id)a0 home:(id)a1;
+ (id)characteristicWithSerializedDictionaryRepresentation:(id)a0 home:(id)a1;
+ (id)localizedDescriptionForCharacteristicType:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)_unconfigure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 service:(id)a1;
- (void)readValueWithCompletionHandler:(id /* block */)a0;
- (id)_characteristicTypeDescription;
- (void)_enableNotification:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_readValueWithCompletionHandler:(id /* block */)a0;
- (void)_unconfigureContext;
- (void)_updateAuthorizationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateValue:(id)a0 updateTime:(id)a1 messageSentDate:(id)a2;
- (void)_writeValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableNotification:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithInstanceID:(id)a0 characteristicType:(id)a1 metadata:(id)a2;
- (BOOL)mergeFromNewObject:(id)a0;
- (id)propertiesFromHAPProperties:(long long)a0;
- (void)setValueUpdateTime:(id)a0;
- (void)updateAuthorizationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeValue:(id)a0 completionHandler:(id /* block */)a1;

@end
