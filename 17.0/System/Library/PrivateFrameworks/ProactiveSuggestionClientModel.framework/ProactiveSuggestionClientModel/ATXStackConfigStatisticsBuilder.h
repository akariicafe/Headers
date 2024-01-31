@class NSString, NSDate;

@interface ATXStackConfigStatisticsBuilder : NSObject

@property (readonly, copy, nonatomic) NSString *widgetBundleId;
@property (readonly, copy, nonatomic) NSString *widgetKind;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) long long widgetFamily;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long countOfSmartStacksWithWidget;
@property (nonatomic) long long countOfNonSmartStacksWithWidget;
@property (nonatomic) long long countOfStandaloneWidgets;
@property (nonatomic) long long countOfWidgetsWithUnknownStackKind;

- (id)build;
- (void).cxx_destruct;
- (id)initWithWidgetBundleId:(id)a0 widgetKind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3;

@end
