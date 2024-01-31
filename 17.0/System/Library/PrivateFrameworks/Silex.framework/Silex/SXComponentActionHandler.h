@class NSString;
@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXComponentActionHandler : SXAnalyticsEvent <SXPostActionHandler, SXComponentActionHandler>

@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly, nonatomic) id<SXActionSerializer> actionSerializer;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
