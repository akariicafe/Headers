@class NSString, NSDictionary;

@interface UARPServiceUpdaterAccessoryMatchingRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *xpcEventStream;
@property (readonly) NSDictionary *matchingDictionary;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 xpcEventStream:(id)a1 matchingDictionary:(id)a2;
- (id)description;
- (const char *)transportDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
