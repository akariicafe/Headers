@interface CACodingProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)decodedObject;
- (id)initWithCoder:(id)a0;

@end
