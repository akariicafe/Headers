@class NSString;

@interface MLAppleImageFeatureExtractorScenePrintParameters : NSObject

@property (readonly) unsigned long long scenePrintVersion;
@property (readonly) NSString *requestClassName;

- (void).cxx_destruct;
- (id)initScenePrintParameters:(unsigned long long)a0 requestClass:(id)a1 error:(id *)a2;

@end
