@class NSDictionary, PRSWidget, NSArray;

@interface PRPosterMutableComplicationLayout : PRPosterComplicationLayout

@property (copy, nonatomic) PRSWidget *inlineComplication;
@property (copy, nonatomic) NSDictionary *sidebarComplicationIconLayout;
@property (copy, nonatomic) NSArray *sidebarComplications;
@property (copy, nonatomic) NSArray *complications;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

@end
