@class NSMutableSet;
@protocol FBSServiceFacilityClientHandle;

@interface SBButtonConsumerClient : NSObject

@property (retain, nonatomic) id<FBSServiceFacilityClientHandle> systemServiceClient;
@property (nonatomic, getter=isEntitledToConsumeButtonsInBackground) BOOL entitledToConsumeButtonsInBackground;
@property (nonatomic, getter=isApplication) BOOL application;
@property (nonatomic, getter=isRunningVisible) BOOL runningVisible;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) BOOL canReceiveEvents;
@property (retain, nonatomic) NSMutableSet *registrations;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
