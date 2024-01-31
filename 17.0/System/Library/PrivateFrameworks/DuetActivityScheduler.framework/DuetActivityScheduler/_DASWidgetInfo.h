@class NSString;

@interface _DASWidgetInfo : NSObject

@property (readonly, copy, nonatomic) NSString *extensionBundleID;
@property (copy, nonatomic) NSString *widgetID;
@property (readonly, copy, nonatomic) NSString *budgetID;

- (void).cxx_destruct;
- (id)_initWithBudgetID:(id)a0 extensionBundleID:(id)a1;

@end
