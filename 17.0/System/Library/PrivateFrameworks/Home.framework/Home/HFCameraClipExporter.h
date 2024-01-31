@interface HFCameraClipExporter : NSObject

+ (BOOL)hasCachedRecordingForCameraClip:(id)a0;
+ (id)userFriendlyExportURLForCameraName:(id)a0 withStartDate:(id)a1;
+ (id)_exportableCameraName:(id)a0;
+ (double)durationOfCachedRecordingForCameraClip:(id)a0;

@end
