@class NSRecursiveLock, NSString, NSUUID, DIOneshotTimer, NSDate, DIDeviceStateUpdateThrottler, DIXPCConnectionManager;
@protocol DIDeviceDelegate;

@interface DIDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *homeKitIdentifier;
@property (copy, nonatomic) NSUUID *homeKitHomeIdentifier;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *stateReason;
@property (copy, nonatomic) NSDate *stateExpiration;
@property (nonatomic) BOOL isCurrentDevice;
@property (retain) DIOneshotTimer *timer;
@property (readonly, nonatomic) DIDeviceStateUpdateThrottler *stateUpdateThrottler;
@property (readonly) NSRecursiveLock *lock;
@property (weak, nonatomic) id<DIDeviceDelegate> delegate;

+ (id)stringForDeviceState:(long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)notifyDeviceDidChange;
- (void)notifyDidUpdateState;
- (void)updateState:(long long)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateWithDevice:(id)a0 updateState:(BOOL)a1;

@end
