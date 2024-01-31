@class NSUUID, LNValue;

@interface LNNeedsValueResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNValue *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
