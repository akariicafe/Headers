@class NSObject;
@protocol OS_xpc_object;

@interface HTHangReporterService : NSObject {
    NSObject<OS_xpc_object> *_hangReporterConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)getProcessingHangsWithCompletion:(id /* block */)a0;

@end
