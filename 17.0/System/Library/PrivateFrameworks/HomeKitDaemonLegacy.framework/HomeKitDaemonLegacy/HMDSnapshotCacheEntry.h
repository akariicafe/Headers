@class HMDSnapshotFile, NSString, HMFTimer;

@interface HMDSnapshotCacheEntry : HMFObject

@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly, nonatomic) NSString *snapshotCharacteristicEventUUID;
@property (readonly, nonatomic) HMFTimer *timer;
@property (copy, nonatomic) id /* block */ snapshotRequestCompletion;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSnapshotCharacteristicEventUUID:(id)a0 snapshotFile:(id)a1 timer:(id)a2;

@end
