@class UIViewController;

@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long level;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 atLevel:(long long)a1;

@end
