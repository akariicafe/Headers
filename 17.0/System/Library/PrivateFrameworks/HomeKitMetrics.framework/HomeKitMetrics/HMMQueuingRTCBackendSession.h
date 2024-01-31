@class NSString, NSUUID, NSMutableArray;
@protocol _HMMLogBackendSubmitterDelegate;

@interface HMMQueuingRTCBackendSession : NSObject <HMMRTCBackendSession> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isOpen;
    NSMutableArray *_queuedEvents;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) BOOL isRealtime;
@property (readonly, weak, nonatomic) id<_HMMLogBackendSubmitterDelegate> submitter;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) double lastEventTime;

+ (id)logCategory;

- (void)close;
- (void)dealloc;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 sessionUUID:(id)a1 isRealtime:(BOOL)a2 submitter:(id)a3 timeSourceBlock:(id /* block */)a4;

@end
