@class NSURLSession, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXPhoenixBlobbyUploader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURLSession *_session;
    NSDictionary *_bucketInfo;
}

+ (id)_getStringforDate:(id)a0;
+ (id)sharedUploader;

- (id)init;
- (void).cxx_destruct;
- (void)_completeUploadRequestWithData:(id)a0 urlResponse:(id)a1 error:(id)a2 forPackagePath:(id)a3 withCompletion:(id /* block */)a4;
- (id)_dateStringForHeaderForDate:(id)a0;
- (id)_getAuthorizationForRequest:(id)a0 headers:(id)a1;
- (id)_hmacSHA1WithKey:(id)a0 forData:(id)a1;
- (id)_md5OfData:(id)a0;
- (id)_prefixFromPackageFilePath:(id)a0;
- (void)_uploadPackage:(id)a0 bucket:(id)a1 prefix:(id)a2 withCompletion:(id /* block */)a3;
- (void)_uploadPackagePath:(id)a0 bucket:(id)a1 prefix:(id)a2 withCompletion:(id /* block */)a3;
- (id)_urlRequestForFileAtPath:(id)a0 bucket:(id)a1 prefix:(id)a2 error:(id *)a3;
- (void)uploadPackages:(id)a0 toBucket:(id)a1 withCompletion:(id /* block */)a2;

@end
