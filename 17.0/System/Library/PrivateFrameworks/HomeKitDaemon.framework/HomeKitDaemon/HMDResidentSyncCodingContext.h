@class _MKFUser, HMDDeviceAddress, NSSet;

@interface HMDResidentSyncCodingContext : NSObject {
    NSSet *_relevantTriggers;
    NSSet *_relevantBulletinRegistrations;
}

@property (readonly, nonatomic) _MKFUser *targetUser;
@property (readonly, nonatomic) BOOL targetIsResident;
@property (readonly, nonatomic) HMDDeviceAddress *targetDeviceAddress;

- (void).cxx_destruct;
- (id)initWithTargetUser:(id)a0 targetIsResident:(BOOL)a1 targetDeviceAddress:(id)a2;

@end
