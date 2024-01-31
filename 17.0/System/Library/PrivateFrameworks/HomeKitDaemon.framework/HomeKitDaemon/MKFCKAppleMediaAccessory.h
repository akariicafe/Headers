@class NSUUID, NSDictionary, MKFCKResident, NSNumber, HMFPairingIdentity;

@interface MKFCKAppleMediaAccessory : MKFCKAccessory

@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (copy, nonatomic) NSNumber *variant;
@property (retain, nonatomic) MKFCKResident *resident;

+ (id)fetchRequest;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
