@class UIFont, NSString, NSDictionary, NSURL, UIColor, UIImage;
@protocol VUINetworkRequestLoader;

@interface VUIMonogramDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) UIFont *font;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (retain, nonatomic) NSDictionary *specialOffsetByFirstLetter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) long long scaleMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double upscaleAdjustment;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) BOOL shouldFallBackToSilhouette;
@property (nonatomic) BOOL isUsingLibraryImageLoader;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (weak, nonatomic) id<VUINetworkRequestLoader> requestLoader;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL optimizedImageRendering;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithType:(unsigned long long)a0;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 imageURL:(id)a2 font:(id)a3;
- (unsigned long long)preferedMonogramType;
- (struct CGPoint { double x0; double x1; })specialOffsetForString:(id)a0;

@end
