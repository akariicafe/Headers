@interface PLCloudPhotoLibraryError : NSObject

+ (id)createErrorWithType:(long long)a0;
+ (id)createErrorWithType:(long long)a0 withDebugMessage:(id)a1;
+ (id)userMessageForErrorType:(long long)a0;

@end
