@interface AMDTestDataCommon : NSObject

+ (id)getAggregationDescriptorDict;
+ (id)getEventPayload:(id)a0;
+ (id)getInferencePayload;
+ (id)getNonAggregationDescriptor;
+ (id)getRefreshOnDeviceTasteProfilePayload;
+ (id)getRefreshServerTasteProfilePayload;
+ (id)getSampleEvent;
+ (id)getSampleEventCrashes;
+ (id)getSampleEventInstalls;
+ (id)getSampleEventLaunches;
+ (id)getSampleEventUninstall;
+ (id)getSampleWorkflow;
+ (id)getSaveConfigDownloadModelPayload;
+ (id)gettabInfoDict;

@end
