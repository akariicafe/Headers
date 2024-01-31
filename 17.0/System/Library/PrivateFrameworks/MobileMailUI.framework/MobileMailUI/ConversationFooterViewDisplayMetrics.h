@interface ConversationFooterViewDisplayMetrics : NSObject

@property (nonatomic) double toolbarHeight;
@property (nonatomic) double topToBaseline;
@property (nonatomic) BOOL usePhoneLandscapeSymbolConfiguration;

+ (id)displayMetricsWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 interfaceOrientation:(long long)a1 traitCollection:(id)a2;

@end
