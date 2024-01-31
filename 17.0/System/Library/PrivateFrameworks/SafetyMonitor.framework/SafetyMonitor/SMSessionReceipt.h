@class NSUUID, NSArray, NSDate;

@interface SMSessionReceipt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) NSArray *receiverHandles;
@property (readonly, nonatomic) BOOL readStatus;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0 sessionType:(unsigned long long)a1 sessionStartTime:(id)a2 sessionEndTime:(id)a3 receiverHandles:(id)a4 safetyCacheReadStaus:(BOOL)a5;

@end
