@class NSString;
@protocol PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol;

@interface SGBinaryClassificationModel : SGModel <PMLPlistAndChunksSerializableProtocol>

@property (readonly) double threshold;
@property (readonly) id<PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelForPath:(id)a0 modelClass:(Class)a1;
+ (id)modelFromMobileAssetForEntity:(id)a0 type:(id)a1 language:(id)a2 class:(Class)a3;
+ (id)modelFromMobileAssetForName:(id)a0 language:(id)a1;

@end
