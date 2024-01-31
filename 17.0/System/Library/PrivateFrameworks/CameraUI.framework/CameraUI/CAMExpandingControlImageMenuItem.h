@class UIImage;

@interface CAMExpandingControlImageMenuItem : CAMExpandingControlMenuItem

@property (readonly, nonatomic) UIImage *titleImage;

+ (id)menuItemWithState:(id)a0 titleImage:(id)a1 subtitle:(id)a2 selectedSubtitle:(id)a3 configuration:(id)a4;

- (void).cxx_destruct;
- (BOOL)isEqualToItem:(id)a0;

@end
