@class NSString;
@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXActionComponentInteractionHandlerFactory : NSObject <SXActionComponentInteractionHandlerFactory>

@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly, nonatomic) id<SXActionSerializer> actionSerializer;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionManager:(id)a0 actionSerializer:(id)a1 analyticsReportingProvider:(id)a2;
- (id)interactionHandlerForAction:(id)a0;

@end
