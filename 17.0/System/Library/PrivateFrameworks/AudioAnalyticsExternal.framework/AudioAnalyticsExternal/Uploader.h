@class NSURLSession, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_semaphore;

@interface Uploader : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_semaphore> *concurrentUploadSemaphore;
@property (retain) NSURLSession *session;
@property (retain) NSDictionary *bucketInfo;
@property (retain) NSObject<OS_os_log> *logger;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)invalidateConnection;
- (id)_dateStringForHeaderForDate:(id)a0;
- (id)_hmacSHA1WithKey:(id)a0 forData:(id)a1;
- (id)_md5OfData:(id)a0;
- (id)_urlRequestForFileAtPath:(id)a0 bucket:(id)a1 prefix:(id)a2 error:(id *)a3;
- (id)_authorizationHeaderWithRequest:(id)a0 withContentType:(id)a1 withContentMD5:(id)a2 withDate:(id)a3;
- (void)_uploadFile:(id)a0 bucket:(id)a1 prefix:(id)a2 withCompletion:(id /* block */)a3;
- (void)uploadFile:(id)a0 bucket:(id)a1 subfolder:(id)a2 withCompletion:(id /* block */)a3;

@end
