@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {
    UIFont *_font;
    double _minimumFontSize;
    double _actualFontSize;
    double _lineSpacing;
    long long _lineBreakMode;
    long long _baselineAdjustment;
    long long _alignment;
    BOOL _includeEmoji;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _truncationRect;
    BOOL _drawUnderline;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
