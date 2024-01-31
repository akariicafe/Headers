@class NSString, NSDate;

@interface ILCommunication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSDate *dateReceived;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSender:(id)a0 dateReceived:(id)a1;
- (BOOL)isEqualToCommunication:(id)a0;

@end
