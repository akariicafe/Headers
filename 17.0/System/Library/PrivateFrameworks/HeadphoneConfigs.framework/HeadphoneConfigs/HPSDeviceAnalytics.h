@class NSString, NSMutableDictionary;

@interface HPSDeviceAnalytics : NSObject {
    NSString *_entryPoint;
    NSMutableDictionary *_analyticDict;
    NSMutableDictionary *_analyticDictV2;
    NSMutableDictionary *_analyticDictFitTest;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetAnalyticDict;
- (void)resetAnalyticDictFitTest;
- (void)resetAnalyticDictV2;
- (void)sendFeatureInfoEvent;
- (void)submitDeviceAnalytics;
- (void)submitDeviceAnalyticsVer2;
- (void)submitFitTestAnalytics;
- (void)updateEntryPoint:(int)a0;
- (void)updateFeatureChangeCount:(int)a0;
- (void)updateFeatureValue:(int)a0 value:(unsigned int)a1 featureValueString:(id)a2;
- (void)updateFitTestValue:(int)a0 value:(int)a1;
- (void)updateProductID:(unsigned int)a0;

@end
