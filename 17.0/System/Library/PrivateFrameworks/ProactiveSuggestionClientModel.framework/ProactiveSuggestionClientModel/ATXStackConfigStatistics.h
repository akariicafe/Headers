@class NSString, NSDate;

@interface ATXStackConfigStatistics : NSObject

@property (readonly, copy, nonatomic) NSString *widgetBundleId;
@property (readonly, copy, nonatomic) NSString *widgetKind;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) long long widgetFamily;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long countOfSmartStacksWithWidget;
@property (readonly, nonatomic) long long countOfNonSmartStacksWithWidget;
@property (readonly, nonatomic) long long countOfStandaloneWidgets;
@property (readonly, nonatomic) long long countOfWidgetsWithUnknownStackKind;

+ (id)stackConfigStatisticsWithWidgetBundleId:(id)a0 widgetKind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3 withBlock:(id /* block */)a4;

- (id)initWithBuilder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
