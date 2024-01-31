@class UIColor, NSString, NSArray, UIImage, UIView, _UIBarCustomizationChiclet;

@interface _UIBarCustomizationItem : NSObject

@property (nonatomic) BOOL collapsible;
@property (retain, nonatomic) _UIBarCustomizationChiclet *_chiclet;
@property (nonatomic) BOOL reverseItemsForRTL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ sourceViewProvider;
@property (readonly, nonatomic) NSArray *subitems;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) BOOL removable;

+ (id)groupWithWithIdentifier:(id)a0 icon:(id)a1 name:(id)a2 items:(id)a3;
+ (id)itemWithIdentifier:(id)a0 icon:(id)a1 name:(id)a2 view:(id)a3;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_enumerateSubitemsWithBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceFrameInContainer:(id)a0;

@end
