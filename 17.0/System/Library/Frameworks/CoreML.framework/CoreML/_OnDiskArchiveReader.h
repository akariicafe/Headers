@class NSDictionary, NSString, NSArray;

@interface _OnDiskArchiveReader : NSObject <_ArchiveReader>

@property (readonly, copy, nonatomic) NSDictionary *netJson;
@property (readonly, copy, nonatomic) NSDictionary *shapeJson;
@property (readonly, copy, nonatomic) NSString *modelPath;
@property (readonly, nonatomic) NSArray *layerInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelName;
+ (id)modelNetFileName;
+ (id)parseCompiledNetworkBlobWithName:(id)a0 archive:(void *)a1 error:(id *)a2;
+ (id)readerFromArchiver:(void *)a0 error:(id *)a1;
+ (id)modelShapeFileName;

- (id)loadUpdatableParams:(id *)a0;
- (id)initWithNetJson:(id)a0 shapeJson:(id)a1 modelPath:(id)a2;
- (void)copyLayerShapesToContainer:(id)a0;
- (void).cxx_destruct;
- (id)transformParams;

@end
