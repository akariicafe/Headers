@class UIImage, SKUIArtwork, NSAttributedString;

@interface SKUIIndexBarEntryDescriptor : NSObject

@property (nonatomic) long long entryDescriptorType;
@property (retain, nonatomic) SKUIArtwork *artwork;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) long long visibilityPriority;

+ (id)entryDescriptorWithArtwork:(id)a0;
+ (id)entryDescriptorWithAttributedString:(id)a0;
+ (id)entryDescriptorWithImage:(id)a0;
+ (id)placeholderEntryDescriptorWithSize:(struct CGSize { double x0; double x1; })a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
