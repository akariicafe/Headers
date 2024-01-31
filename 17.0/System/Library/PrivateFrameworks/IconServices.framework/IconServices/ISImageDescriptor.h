@class NSString, NSUUID, IFColor;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGSize { double x0; double x1; } sanitizedSize;
@property (readonly) double sanitizedScale;
@property (retain) NSString *preferedResourceName;
@property BOOL preferExtendedColorResources;
@property (readonly) NSUUID *digest;
@property BOOL ignoreCache;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long variantOptions;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long shape;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) BOOL drawBorder;
@property (nonatomic) BOOL drawBadge;
@property (nonatomic) BOOL templateVariant;
@property (nonatomic) BOOL selectedVariant;
@property (retain, nonatomic) IFColor *tintColor;
@property (nonatomic) BOOL graphicVariant;
@property (nonatomic) long long appearance;
@property (nonatomic) long long contrast;
@property (nonatomic) long long vibrancy;
@property unsigned long long languageDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageDescriptorWithIconVariant:(int)a0 options:(int)a1;
+ (id)icnsImageDescriptors;
+ (id)imageDescriptorNamed:(id)a0;

- (id)_recipe;
- (id)digest;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
