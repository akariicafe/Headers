@class NSDictionary, NSArray;

@interface EMMessageHeaders : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *headers;
@property (readonly, copy, nonatomic) NSArray *headerKeys;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)firstHeaderForKey:(id)a0;
- (id)headersForKey:(id)a0;
- (id)initWithHeaders:(id)a0;

@end
