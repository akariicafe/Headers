@class UARPUploaderEndpoint, UARPSuperBinaryAsset, NSURL, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface UARPDynamicAssetPersonalization : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_options;
    UARPSuperBinaryAsset *_im4mAsset;
}

@property (readonly) UARPUploaderEndpoint *endpoint;
@property (readonly) NSURL *url;
@property (readonly) long long assetNumber;

- (id)init;
- (void).cxx_destruct;
- (id)buildKey:(id)a0 forPayload:(id)a1;
- (id)buildTicketPrefixForPayload:(id)a0;
- (id)initWithEndpoint:(id)a0 url:(id)a1;
- (BOOL)prepareDynamicAsset:(id)a0 error:(id *)a1;
- (BOOL)processDynamicAsset:(id *)a0;
- (BOOL)tssRequest:(id)a0 error:(id *)a1;

@end
