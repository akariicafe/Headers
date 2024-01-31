@interface LighthouseReferenceResolution.LRRCdmProtobufConverter_swift : NSObject

+ (id)deserializeMDRequestFromJsonWithProtoJson:(id)a0;
+ (id)deserializeMDResponseFromJsonWithProtoJson:(id)a0;
+ (id)deserializeMRRequestFromJsonWithProtoJson:(id)a0;
+ (id)deserializeMRResponseFromJsonWithProtoJson:(id)a0;
+ (id)deserializeMatchingSpanFromJsonWithProtoJson:(id)a0;
+ (id)deserializeNluRequestFromJsonWithProtoJson:(id)a0;
+ (id)deserializeNluResponseFromJsonWithProtoJson:(id)a0;
+ (id)deserializeUsoGraphFromJsonWithProtoJson:(id)a0;
+ (id)serializeNluRequestToJsonWithProtoData:(id)a0;
+ (id)serializeNluResponseToJsonWithProtoData:(id)a0;
+ (id)serializeUsoGraphToJsonWithProtoData:(id)a0;

- (id)init;

@end
