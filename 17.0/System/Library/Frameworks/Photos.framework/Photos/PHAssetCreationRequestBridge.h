@class NSString;

@interface PHAssetCreationRequestBridge : NSObject <PLAssetJobExecutor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildAdjustmentsPlistPathForPhotoKitIngestJob:(id)a0 withSourcePath:(id)a1;

- (void)_deleteJobFileAtPath:(id)a0 withJobDict:(id)a1;
- (BOOL)_executeCreationRequestWithImageJobDict:(id)a0 error:(id *)a1;
- (BOOL)_executeCreationRequestWithVideoJobDict:(id)a0 error:(id *)a1;
- (BOOL)_finalizeBurstImage:(id)a0;
- (BOOL)executeCreationRequestWithBatchJobDictionaries:(id)a0 jobSuccess:(BOOL *)a1 jobError:(id *)a2;
- (BOOL)executeCreationRequestWithJobDict:(id)a0 jobSuccess:(BOOL *)a1 jobError:(id *)a2;

@end
