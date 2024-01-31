@class NSString, CHSWidgetMetricsSpecification, NSArray;

@interface _CHSWidgetConfigurationHost : NSObject <CHSWidgetConfigurationHost_Internal> {
    NSString *_identifier;
    NSArray *_configurations;
    CHSWidgetMetricsSpecification *_metricsSpecification;
}

@property (readonly, copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *widgetConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
