@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider>

@property (readonly, nonatomic) NSArray *links;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)componentType;
- (id)valueForMetricsField:(id)a0;
- (void)_setLinksWithLinksArray:(id)a0 context:(id)a1;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)metricsElementName;

@end
