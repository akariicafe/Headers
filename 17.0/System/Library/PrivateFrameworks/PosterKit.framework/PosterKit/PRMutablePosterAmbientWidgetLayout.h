@class NSDictionary;

@interface PRMutablePosterAmbientWidgetLayout : PRPosterAmbientWidgetLayout

@property (copy, nonatomic) NSDictionary *widgetLayoutIconState;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

@end
