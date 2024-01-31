@class NSDictionary;

@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}

- (id)init;
- (id)initWithPersonalizedConfiguration:(id)a0;
- (id)_readPersonalizedConfiguration;
- (void).cxx_destruct;
- (id)personalizedValueForParameter:(id)a0 forWidgetBundleIdentifier:(id)a1 kind:(id)a2;

@end
