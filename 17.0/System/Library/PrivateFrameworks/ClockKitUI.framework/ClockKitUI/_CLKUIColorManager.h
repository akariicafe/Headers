@class CALayer, UIColor;

@interface _CLKUIColorManager : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;

- (BOOL)shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)_updateFilterColor;

@end
