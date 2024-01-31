@class NSURL, NSArray, NSString;

@interface _WKApplicationManifestIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *src;
@property (readonly, copy, nonatomic) NSArray *sizes;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *purposes;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoreIcon:(const void *)a0;

@end
