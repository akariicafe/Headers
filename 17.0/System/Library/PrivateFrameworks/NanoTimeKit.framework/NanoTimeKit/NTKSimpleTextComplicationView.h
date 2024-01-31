@class CLKComplicationTemplateSimpleText, NSString, CLKFont, CLKUIColoringLabel, CLKDevice, NSDate;
@protocol CDComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <CDComplicationDisplay, CDTemplateComplicationDisplay>

@property (retain, nonatomic) CLKUIColoringLabel *label;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CLKComplicationTemplateSimpleText *template;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (retain, nonatomic) CLKFont *font;
@property (readonly, nonatomic) unsigned long long complicationType;
@property (weak, nonatomic) id<CDComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)init;
- (id)_defaultFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (void)_updateLabelFrame;
- (id)complicationTemplate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;

@end
