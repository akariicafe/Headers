@class NSArray, NSString, NSUUID, NSData, CBPeripheral, NSMutableArray, NSNumber;

@interface HAPBLEPeripheral : HMFObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *cbPeripheralUUIDs;
@property (copy) NSString *name;
@property (copy) NSString *identifier;
@property (readonly) NSUUID *uniqueBTIdentifier;
@property (retain) NSNumber *hkType;
@property (retain) NSNumber *advInterval;
@property (retain) NSString *advDeviceAddress;
@property (retain) NSNumber *statusFlags;
@property (retain) NSNumber *category;
@property (retain) NSNumber *stateNumber;
@property (retain) NSNumber *configNumber;
@property (retain) NSData *setupHash;
@property (retain) NSData *encryptedPayload;
@property (retain) NSNumber *averageRSSI;
@property double lastSeen;
@property BOOL isCached;
@property unsigned long long advertisementFormat;
@property (retain) CBPeripheral *cbPeripheral;
@property (copy) NSString *whbStableIdentifier;
@property (readonly, nonatomic) NSArray *peripheralUUIDs;
@property (readonly, nonatomic) BOOL isReachable;

+ (id)uuidForBTLEPeripheral:(id)a0;

- (unsigned long long)hash;
- (void)reset;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateAverageRSSIWithRSSI:(id)a0;
- (long long)compareConfigNumber:(id)a0;
- (long long)compareStateNumber:(id)a0;
- (void)connectedToCBPeripheral:(id)a0 error:(id)a1;
- (void)disconnectedFromCBPeripheral:(id)a0 shouldRemove:(BOOL)a1;
- (id)initWithName:(id)a0 peripheralUUID:(id)a1 identifier:(id)a2 hapVersion:(id)a3 hkType:(id)a4 advInterval:(id)a5 statusFlags:(id)a6 category:(id)a7 stateNumber:(id)a8 configNumber:(id)a9 setupHash:(id)a10 encryptedPayload:(id)a11 whbStableIdentifier:(id)a12 advDeviceAddress:(id)a13;
- (BOOL)isBroadcasting;
- (void)mergeWithPeripheral:(id)a0;
- (void)updateStateNumber:(id)a0;
- (BOOL)updateWithPeripheral:(id)a0;

@end
