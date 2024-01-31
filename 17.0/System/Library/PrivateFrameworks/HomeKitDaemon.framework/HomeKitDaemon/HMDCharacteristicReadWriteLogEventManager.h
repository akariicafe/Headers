@class NSMutableDictionary;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDCharacteristicReadWriteLogEventManager *sharedInstance;

@property (readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID;
@property (readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)consecutiveFailureCountForAccessoryUUID:(id)a0;
- (void)handleSubmittedErrorCode:(long long)a0 forAccessoryUUID:(id)a1;
- (double)timeIntervalSinceFirstFailureForAccessoryUUID:(id)a0;

@end
