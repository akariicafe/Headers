@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CMIInferenceDeviceEspressoV1 : NSObject <CMIInferenceDevice> {
    void *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_networks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)createExecutionStream;
- (id)loadNetworkWithPath:(id)a0;

@end
