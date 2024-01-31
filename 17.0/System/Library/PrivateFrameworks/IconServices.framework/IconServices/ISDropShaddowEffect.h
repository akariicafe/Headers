@class IFColor, NSString;

@interface ISDropShaddowEffect : NSObject <ISEffect>

@property double scale;
@property struct CGSize { double width; double height; } offset;
@property double blur;
@property double spread;
@property (retain) IFColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
