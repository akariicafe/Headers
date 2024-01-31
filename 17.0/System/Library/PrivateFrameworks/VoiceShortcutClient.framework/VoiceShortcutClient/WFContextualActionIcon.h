@class NSString, WFIcon, NSURL, NSData;

@interface WFContextualActionIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFIcon *wfIcon;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) double imageScale;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) unsigned long long displayStyle;

+ (id)iconWithSystemName:(id)a0;
+ (id)iconWithImageData:(id)a0 scale:(double)a1 displayStyle:(unsigned long long)a2;
+ (id)iconWithImageName:(id)a0;
+ (id)imageNamed:(id)a0;
+ (id)iconWithImageURL:(id)a0 displayStyle:(unsigned long long)a1;
+ (id)iconWithApplicationBundleIdentifier:(id)a0;

- (id)initWithApplicationBundleIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)renderedImage;
- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 scale:(double)a1 displayStyle:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageName:(id)a0;
- (id)initWithImageURL:(id)a0 displayStyle:(unsigned long long)a1;
- (id)initWithSystemName:(id)a0;
- (id)initWithCoder:(id)a0;

@end
