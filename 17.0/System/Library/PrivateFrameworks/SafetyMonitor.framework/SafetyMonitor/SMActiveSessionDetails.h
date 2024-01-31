@class NSUUID, NSString, NSArray, NSDate;

@interface SMActiveSessionDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSUUID *activeDeviceIdentifier;
@property (readonly, nonatomic) NSDate *cacheReleasedDate;
@property (readonly, nonatomic) NSString *scheduledSendGUID;
@property (readonly, nonatomic) NSArray *receiverHandles;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0 activeDeviceIdentifier:(id)a1 cacheReleasedDate:(id)a2 scheduledSendGUID:(id)a3 receiverHandles:(id)a4;

@end
