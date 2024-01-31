@class UIColor, NSArray, NSString, UIImage;

@interface UIPreviewActionGroup : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem>

@property (copy, nonatomic, getter=_actions, setter=_setActions:) NSArray *actions;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long style;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_actionGroupWithPreviewMenuItemWithSubactions:(id)a0;
+ (id)_actionGroupWithTitle:(id)a0 style:(long long)a1 color:(id)a2 actions:(id)a3;
+ (id)actionGroupWithTitle:(id)a0 style:(long long)a1 actions:(id)a2;

@end
