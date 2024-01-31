@class NSArray, NSString, NSSet, HMFFuture;
@protocol HMDResidentDeviceManagerContext;

@interface HMDPrimaryElectionFindPrimaryMeshOperation : HMFOperation <HMFLogging> {
    NSArray *_results;
    id<HMDResidentDeviceManagerContext> _context;
    NSSet *_otherResidents;
    HMFFuture *_messagesFuture;
}

@property (readonly, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
