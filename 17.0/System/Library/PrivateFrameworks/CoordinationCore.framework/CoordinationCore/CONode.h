@class NSObject, NSString, NSUUID, COElectionInfo, COClusterMemberRoleSnapshot, COConstituent;
@protocol CONodeDelegate, OS_dispatch_source;

@interface CONode : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<CONodeDelegate> delegate;
@property (nonatomic) long long state;
@property (readonly, nonatomic) COConstituent *meConstituent;
@property (retain, nonatomic) COClusterMemberRoleSnapshot *memberSnapshot;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (copy, nonatomic) NSUUID *HomeKitIdentifier;
@property (retain, nonatomic) COConstituent *remote;
@property (copy, nonatomic) COElectionInfo *lastElectionInfoSent;
@property (copy, nonatomic) COElectionInfo *lastElectionInfoReceived;
@property (nonatomic) double lastHeard;
@property (nonatomic, getter=hasOutstandingProbe) BOOL outstandingProbe;
@property (readonly, nonatomic, getter=hasOutstandingRequest) BOOL outstandingRequest;
@property (nonatomic, getter=hasPendingPing) BOOL pendingPing;
@property (nonatomic) unsigned long long backoffBucket;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *backoffTimer;
@property (nonatomic) unsigned long long totalBackedOffTime;
@property (copy, nonatomic) id /* block */ backoffResponse;
@property (nonatomic) unsigned long long discoveryType;
@property (nonatomic) unsigned long long connectionType;

+ (id)descriptionForState:(long long)a0;
+ (id)statusFromState:(long long)a0;

- (void).cxx_destruct;
- (BOOL)isActive;
- (void)_withLock:(id /* block */)a0;
- (void)_resetElectionRelatedInformation;
- (void)discoveryRecordAdded:(id)a0;
- (void)discoveryRecordRemoved:(id)a0;
- (id)initWithRecord:(id)a0 executionContext:(id)a1 delegate:(id)a2;
- (BOOL)isInElectionState;
- (void)resetBackoffInformation;

@end
