@class NSString;

@interface HMDLostModeManager : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    BOOL _lost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isLost) BOOL lost;

+ (id)sharedManager;
+ (id)logCategory;

- (id)init;
- (id)attributeDescriptions;

@end
