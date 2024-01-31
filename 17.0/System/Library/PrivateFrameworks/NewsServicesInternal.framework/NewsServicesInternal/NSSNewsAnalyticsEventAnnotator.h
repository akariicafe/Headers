@protocol NSSNewsAnalyticsSessionManager, NSSNewsAnalyticsUserIDProvider;

@interface NSSNewsAnalyticsEventAnnotator : NSObject

@property (readonly, weak, nonatomic) id<NSSNewsAnalyticsSessionManager> sessionManager;
@property (readonly, nonatomic) id<NSSNewsAnalyticsUserIDProvider> userIDProvider;

- (id)init;
- (void)annotateEvent:(id)a0 withOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithSessionManager:(id)a0 userIDProvider:(id)a1;

@end
