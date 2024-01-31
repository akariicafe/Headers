@class NSURL;

@interface SAPathInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *url;
@property BOOL exclusive;

+ (id)pathInfoWithURL:(id)a0;
+ (id)pathInfoWithURL:(id)a0 exclusive:(BOOL)a1;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 exclusive:(BOOL)a1;

@end
