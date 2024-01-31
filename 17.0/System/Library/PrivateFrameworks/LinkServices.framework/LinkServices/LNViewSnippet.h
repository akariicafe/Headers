@class NSString, NSData;

@interface LNViewSnippet : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *targetBundleIdentifier;
@property (readonly, copy, nonatomic) NSData *viewData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainerBundleIdentifier:(id)a0 targetBundleIdentifier:(id)a1 viewData:(id)a2;

@end
