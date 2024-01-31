@class NSArray;

@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject

@property (readonly) unsigned long long objectPrintVersion;
@property (readonly) NSArray *expectedShapes;
@property (readonly) NSArray *expectedKeys;

- (void).cxx_destruct;
- (id)initObjectPrintParameters:(unsigned long long)a0 expectedShapes:(id)a1 expectedKeys:(id)a2 error:(id *)a3;

@end
