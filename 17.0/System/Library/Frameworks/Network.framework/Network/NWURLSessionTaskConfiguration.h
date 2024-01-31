@class NWURLSessionTask, NSURLSessionConfiguration, NSURLRequest, NSObject;
@protocol OS_nw_activity;

@interface NWURLSessionTaskConfiguration : NSObject {
    NSURLSessionConfiguration *_configuration;
    NWURLSessionTask *_task;
    NSURLRequest *_request;
    NSObject<OS_nw_activity> *_internalActivity;
}

- (void).cxx_destruct;

@end
