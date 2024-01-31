@class UIColor, NSString, NSArray, UIImage;

@interface UIPreviewMenuItem : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic, getter=_subitems, setter=_setSubitems:) NSArray *_subitems;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (copy, nonatomic) NSString *identifier;

+ (id)_itemWithTitle:(id)a0 color:(id)a1 image:(id)a2 handler:(id /* block */)a3;
+ (id)_itemWithTitle:(id)a0 style:(long long)a1 image:(id)a2 handler:(id /* block */)a3;
+ (id)itemWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)itemWithTitle:(id)a0 style:(long long)a1 items:(id)a2;
+ (id)itemWithViewControllerPreviewAction:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
