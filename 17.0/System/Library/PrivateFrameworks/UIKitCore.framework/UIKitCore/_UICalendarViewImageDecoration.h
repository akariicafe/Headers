@class UIImage, UIColor;

@interface _UICalendarViewImageDecoration : _UICalendarViewDecorationItem {
    UIImage *_image;
    UIColor *_color;
    long long _size;
}

- (void).cxx_destruct;
- (id)_decorationViewForReuseView:(id)a0;
- (id)_decorationViewReusableKey;
- (id)defaultImage;
- (id)initWithImage:(id)a0 color:(id)a1 size:(long long)a2;

@end
