@class NSArray, UIViewController;

@interface SHSheetOptionsViewContext : NSObject

@property (copy, nonatomic) NSArray *customizationGroups;
@property (weak, nonatomic) UIViewController *itemPreviewViewController;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCustomizationGroups:(id)a0;

@end
