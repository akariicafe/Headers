@class NSString, TSPMemoryComponentWriteChannel, NSObject;
@protocol OS_dispatch_data;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodedData;
- (void).cxx_destruct;
- (id)metadataData;
- (id)newMetadataComponentWriteChannel;
- (id)newRootObjectComponentWriteChannel;
- (id)rootObjectComponentData;

@end
