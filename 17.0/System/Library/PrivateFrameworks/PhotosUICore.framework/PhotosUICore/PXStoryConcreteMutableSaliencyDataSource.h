@class NSString, NSMutableDictionary;

@interface PXStoryConcreteMutableSaliencyDataSource : NSObject <PXStorySaliencyDataSource, NSCopying> {
    NSMutableDictionary *_saliencyAreasByUUID;
    NSMutableDictionary *_rawSaliencyAreasByUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)rawSaliencyAreasForDisplayAsset:(id)a0;
- (id)saliencyAreasForDisplayAsset:(id)a0;
- (void)setSaliencyAreas:(id)a0 rawSaliencyAreas:(id)a1 forDisplayAsset:(id)a2;

@end
