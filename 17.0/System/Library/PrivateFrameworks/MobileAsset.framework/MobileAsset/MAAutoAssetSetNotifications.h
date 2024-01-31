@interface MAAutoAssetSetNotifications : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL atomicInstanceDiscovered;
@property (nonatomic) BOOL atomicInstanceAvailableForUse;
@property (nonatomic) BOOL lockUsageCheck;
@property (nonatomic) BOOL filesystemSpaceCritical;
@property (nonatomic) BOOL atomicInstancePurged;
@property (nonatomic) BOOL downloadPending;
@property (nonatomic) BOOL downloadProgress;
@property (nonatomic) BOOL downloadAbandoned;
@property (nonatomic) BOOL downloadedBecameIncomplete;

+ (id)notifyRegistrationName:(id)a0;
+ (id)notifyRegistrationName:(id)a0 forAssetSetIdentifier:(id)a1;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
