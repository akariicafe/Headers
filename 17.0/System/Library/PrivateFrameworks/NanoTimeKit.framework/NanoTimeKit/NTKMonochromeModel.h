@class UIColor, NSString, CLKDevice;

@interface NTKMonochromeModel : NSObject <CLKMonochromeFilterProvider>

@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *nonAccentColor;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)interpolatedColorForView:(id)a0;

@end
