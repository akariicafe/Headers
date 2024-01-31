@interface CKVReplicatedEntityUpdateRecord : NSObject {
    void /* unknown type, empty encoding */ changeOption;
    void /* unknown type, empty encoding */ contentHash;
    void /* unknown type, empty encoding */ localDeviceChanges;
    void /* unknown type, empty encoding */ allProvenance;
    void /* unknown type, empty encoding */ deltaAddedProvenance;
    void /* unknown type, empty encoding */ deltaRemovedProvenance;
    void /* unknown type, empty encoding */ allTimestamps;
    void /* unknown type, empty encoding */ allLocalItems;
    void /* unknown type, empty encoding */ addedLocalItems;
    void /* unknown type, empty encoding */ removedLocalItems;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)contentIdentifier;
- (BOOL)isEqual:(id)a0;
- (unsigned short)getChangeOption;
- (id)getAddedLocalDeviceVariants;
- (id)getAllDeviceProvenance;
- (id)getAllLocalDeviceVariants;
- (id)getDeltaAddedProvenence;
- (id)getDeltaRemovedProvenance;
- (id)getRemovedLocalDeviceVariants;
- (BOOL)hasLocalDeviceChanges;
- (id)initWith:(id)a0 changeOption:(unsigned short)a1 allProvenance:(id)a2 deltaAddedProvenance:(id)a3 deltaRemovedProvenance:(id)a4 localDeviceChanges:(BOOL)a5 allTimestamps:(id)a6;

@end
