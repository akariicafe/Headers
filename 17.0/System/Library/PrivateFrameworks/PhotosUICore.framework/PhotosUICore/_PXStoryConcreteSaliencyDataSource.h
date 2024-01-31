@class NSString, NSDictionary;

@interface _PXStoryConcreteSaliencyDataSource : NSObject <PXStorySaliencyDataSource> {
    NSDictionary *_saliencyAreasByUUID;
    NSDictionary *_rawSaliencyAreasByUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSaliencyAreasByUUID:(id)a0 rawSaliencyAreasByUUID:(id)a1;
- (id)rawSaliencyAreasForDisplayAsset:(id)a0;
- (id)saliencyAreasForDisplayAsset:(id)a0;

@end
