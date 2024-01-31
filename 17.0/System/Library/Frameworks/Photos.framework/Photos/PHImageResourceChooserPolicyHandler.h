@interface PHImageResourceChooserPolicyHandler : NSObject

+ (unsigned long long)qualifyResourceInfo:(id)a0 againstPolicy:(long long)a1 requestInfo:(id)a2 reversed:(BOOL)a3 tooLargeForPolicy:(BOOL *)a4 disqualificationReason:(id *)a5;
+ (BOOL)_passesSquareTableThumbnailTestWithKey:(id)a0 pixelSize:(struct CGSize { double x0; double x1; })a1 storeClassID:(unsigned short)a2 loadingOptions:(unsigned long long)a3;

@end
