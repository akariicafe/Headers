@class NSString, UIImage;

@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding> {
    UIImage *_fetchedImage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (nonatomic) long long activityCategory;
@property (readonly, nonatomic) UIImage *fetchedImage;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithImageName:(id)a0 bundlePath:(id)a1 activityCategory:(long long)a2;

@end
