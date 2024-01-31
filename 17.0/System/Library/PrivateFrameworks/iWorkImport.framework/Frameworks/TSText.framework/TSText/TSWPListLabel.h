@class TSDImageProvider, TSDShadow, NSString;

@interface TSWPListLabel : NSObject

@property (readonly, nonatomic) unsigned long long labelType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double baselineOffset;
@property (retain, nonatomic) TSDShadow *shadow;
@property (nonatomic) double labelIndent;
@property (nonatomic) double labelTypographicExtent;
@property (nonatomic) BOOL isLabelRTL;
@property (readonly, nonatomic) TSDImageProvider *imageProvider;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalImageSize;
@property (readonly, nonatomic) struct __CTLine { } *textLine;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) struct __CTFont { } *labelFont;
@property (readonly, nonatomic) unsigned long long listNumber;
@property (readonly, nonatomic) BOOL isLabelTateChuYoko;
@property (readonly, nonatomic) NSString *labelString;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 imageProvider:(id)a1 size:(struct CGSize { double x0; double x1; })a2 baselineOffset:(double)a3;
- (id)initWithType:(unsigned long long)a0 labelString:(id)a1 textLine:(struct __CTLine { } *)a2 listNumber:(unsigned long long)a3 isTateChuYoko:(BOOL)a4 baselineOffset:(double)a5;
- (BOOL)isEqualToListLabel:(id)a0;

@end
