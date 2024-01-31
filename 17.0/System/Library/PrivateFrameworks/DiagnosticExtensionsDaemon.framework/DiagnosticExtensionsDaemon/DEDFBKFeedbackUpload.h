@interface DEDFBKFeedbackUpload : NSObject

+ (void)cleanUpIfNeeded;
+ (void)cleanUpIfNeededWithDefaults:(id)a0;
+ (void)compactMapOnFeedbackUploadsWithUserDefaults:(id)a0 block:(id /* block */)a1;
+ (void)didFinishUploadOnBugSessionIdentifier:(id)a0;
+ (void)didFinishUploadOnBugSessionIdentifier:(id)a0 withDefaults:(id)a1;

@end
