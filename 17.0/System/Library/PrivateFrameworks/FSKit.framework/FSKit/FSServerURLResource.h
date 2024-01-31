@class NSURL;

@interface FSServerURLResource : FSResource

@property (readonly) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)newWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (int)kind;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getResourceID;

@end
