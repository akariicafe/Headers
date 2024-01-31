@class UIFont, NSString, UIColor, NSURL;
@protocol IKNetworkRequestLoader;

@interface _TVMonogramDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) UIFont *font;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) long long scaleMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double upscaleAdjustment;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) BOOL shouldFallBackToSilhouette;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (weak, nonatomic) id<IKNetworkRequestLoader> requestLoader;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithType:(unsigned long long)a0;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 imageURL:(id)a2 font:(id)a3;
- (unsigned long long)preferedMonogramType;

@end
