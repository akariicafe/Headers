@class NSNumber, NSString;

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) long long playbackState;
@property (nonatomic) long long shuffleState;
@property (nonatomic) long long repeatState;
@property (copy) NSNumber *volume;
@property (copy) NSNumber *muted;
@property (copy) NSString *mediaUniqueIdentifier;
@property (nonatomic) unsigned long long sleepWakeState;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dumpState;
- (id)initWithSessionIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
