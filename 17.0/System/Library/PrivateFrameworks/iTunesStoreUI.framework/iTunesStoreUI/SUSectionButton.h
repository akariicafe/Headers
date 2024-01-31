@class NSString, UIImage, NSURL;

@interface SUSectionButton : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityTitle;
@property (copy, nonatomic) NSString *displayTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) float imageURLScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageInsets;
@property (nonatomic) long long tag;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToBarButtonItem:(id)a0;
- (id)initWithSectionButtonDictionary:(id)a0;

@end
