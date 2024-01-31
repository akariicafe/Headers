@class NSArray, NSDictionary, TUNearbyDeviceHandle;

@interface TUContinuitySessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUNearbyDeviceHandle *device;
@property (readonly, nonatomic) NSArray *recentCalls;
@property (readonly, nonatomic) NSDictionary *recentCallsContacts;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 recentCalls:(id)a1 recentCallsContacts:(id)a2;

@end
