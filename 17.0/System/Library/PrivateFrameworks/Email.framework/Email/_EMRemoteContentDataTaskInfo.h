@class NSString, NSData, NSURLSessionDataTask, NSObject;
@protocol OS_dispatch_data;

@interface _EMRemoteContentDataTaskInfo : NSObject <EFCancelable> {
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly, nonatomic) NSURLSessionDataTask *dataTask;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) BOOL isSynthetic;
@property (readonly, nonatomic) BOOL failOpen;
@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) BOOL didComplete;
@property (nonatomic) BOOL didCollectMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (void)receiveData:(id)a0;
- (id)initWithDataTask:(id)a0 isSynthetic:(BOOL)a1 failOpen:(BOOL)a2 completion:(id /* block */)a3;

@end
