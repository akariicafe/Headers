@class UIView;

@interface UIDebuggingInformationHierarchyDataContainer : NSObject

@property (weak, nonatomic) UIView *view;
@property (nonatomic) long long level;
@property (nonatomic) BOOL collapsed;

- (void).cxx_destruct;
- (id)initWithView:(id)a0 atLevel:(long long)a1;

@end
