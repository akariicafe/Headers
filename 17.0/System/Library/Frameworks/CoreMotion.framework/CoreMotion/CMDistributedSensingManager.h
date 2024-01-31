@class CMDistributedSensingManagerInternal;
@protocol CMDistributedSensingDelegate;

@interface CMDistributedSensingManager : NSObject

@property (readonly, nonatomic) CMDistributedSensingManagerInternal *_internal;
@property (nonatomic) id<CMDistributedSensingDelegate> delegate;

+ (BOOL)isVehicleStateUpdatesAvailable;

- (id)init;
- (void)dealloc;
- (void)subscribeToVehicleState;
- (void)unsubscribeToVehicleState;

@end
