@class NSDictionary;

@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dict;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
