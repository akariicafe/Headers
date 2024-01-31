@class NSData, NSString, CTXPCServiceSubscriptionContext;

@interface CTBinarySMS : NSObject

@property (nonatomic) int portAddressingScheme;
@property (nonatomic) int srcPort;
@property (nonatomic) int dstPort;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) NSString *smscAddress;
@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (nonatomic) int smsType;

- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
