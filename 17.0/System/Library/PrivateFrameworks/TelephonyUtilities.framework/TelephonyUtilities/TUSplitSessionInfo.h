@class NSUUID, TUNeighborhoodHandoffContext, TUNearbyDeviceHandle;

@interface TUSplitSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *conversationID;
@property (readonly, nonatomic) TUNearbyDeviceHandle *device;
@property (readonly, nonatomic) TUNeighborhoodHandoffContext *handoffContext;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConversationID:(id)a0 device:(id)a1 handoffContext:(id)a2;

@end
