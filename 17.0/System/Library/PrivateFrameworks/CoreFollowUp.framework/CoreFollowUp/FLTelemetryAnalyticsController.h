@class NSString;

@interface FLTelemetryAnalyticsController : NSObject <FLTelemetryController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_captureItem:(id)a0 event:(id)a1 source:(id)a2;
- (void)captureItemAddition:(id)a0;
- (void)captureActionForItem:(id)a0 withEvent:(unsigned long long)a1 source:(unsigned long long)a2;
- (void)captureItemRemoval:(id)a0;
- (void)captureItemView:(id)a0;
- (void)captureCurrentState:(id)a0;

@end
