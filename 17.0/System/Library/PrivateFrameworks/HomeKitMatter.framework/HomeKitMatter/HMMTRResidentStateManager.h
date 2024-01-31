@class NSString;
@protocol HMMTRResidentStateManagerDataSource;

@interface HMMTRResidentStateManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (weak) id<HMMTRResidentStateManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)handleResidentStateUpdated;

@end
