@class NSData, NSMutableDictionary;

@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding>

@property (class, nonatomic) unsigned long long minRemoteDevicePassSyncStateVersionSupport;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *syncStateItems;
@property (readonly, nonatomic) NSData *syncStateHash;
@property (readonly, nonatomic) unsigned long long version;

+ (id)_currentActiveDevice;
+ (id)_deviceDomainAccessor;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVersion:(unsigned long long)a0;
- (id)initWithPasses:(id)a0;
- (id)initWithSyncStateItems:(id)a0 version:(unsigned long long)a1;
- (void)_commonInitWithVersion:(unsigned long long)a0;
- (id)commonBaselinePassSyncStateWithState:(id)a0 version:(unsigned long long)a1;
- (void)compareWithBaselinePassSyncState:(id)a0 outAddedSyncItems:(id *)a1 outUpdatedSyncItems:(id *)a2 outRemovedSyncItems:(id *)a3;
- (BOOL)diffWithBaselineState:(id)a0 representsMaterialDifferenceFromState:(id)a1;
- (id)initWithPasses:(id)a0 version:(unsigned long long)a1;
- (id)initWithProtoSyncState:(id)a0;
- (id)initWithSyncStateItems:(id)a0;
- (BOOL)isEqualToPassSyncState:(id)a0;
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)a0;
- (id)passSyncStateByApplyingChange:(id)a0;
- (id)passSyncStateByRemovingPassWithUniqueID:(id)a0;
- (id)protoSyncState;
- (BOOL)stateContainsSyncStateItem:(id)a0;
- (BOOL)stateIsSubsetOfUnionOfPassSyncStates:(id)a0;

@end
