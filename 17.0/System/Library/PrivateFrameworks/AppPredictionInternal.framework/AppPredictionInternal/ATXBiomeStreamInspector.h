@interface ATXBiomeStreamInspector : NSObject

+ (void)_makeStreamJSONForStream:(id)a0 publisher:(id)a1 maxNumEvents:(unsigned long long)a2 callback:(id /* block */)a3;
+ (void)makeJSONRepresentationForStreamWithBlock:(id /* block */)a0;
+ (void)makeJSONRepresentationForStreamWithBlock:(id /* block */)a0 blendingPublisher:(id)a1 clientPublisher:(id)a2 uiPublisher:(id)a3 spotlightUIPublisher:(id)a4 appLaunchPublisher:(id)a5 appIntentPublisher:(id)a6 inferredModePublisher:(id)a7;

@end
