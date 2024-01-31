@class UIImage, NSString;

@interface ABCarouselItem : NSObject <NSCopying> {
    BOOL _canBeHighlighted;
    UIImage *_image;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
