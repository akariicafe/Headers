@class NSURL;

@interface MIBundleContainerToken : MIContainerToken

@property (readonly, nonatomic) BOOL hasIdentifiedBundle;
@property (readonly, nonatomic) NSURL *bundleURL;

+ (BOOL)supportsSecureCoding;

- (id)initWithContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
