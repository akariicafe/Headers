@class NSDictionary;

@interface MAPushNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *pushPayload;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserInfo:(id)a0;
- (id)initWithCoder:(id)a0;

@end
