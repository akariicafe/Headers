@interface PHImageResourceChooserBestPolicyHandler : PHImageResourceChooserPolicyHandler

+ (BOOL)_imageResourceIsUndecodableBasedOnMetadata:(id)a0 asset:(id)a1 loggingPrefix:(id)a2;
+ (unsigned long long)qualifyResourceInfo:(id)a0 againstPolicy:(long long)a1 requestInfo:(id)a2 reversed:(BOOL)a3 tooLargeForPolicy:(BOOL *)a4 disqualificationReason:(id *)a5;

@end
