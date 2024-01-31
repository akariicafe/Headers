@class NSSet, NSArray;

@interface PTCinematographyNetworkParameters : NSObject

@property float expectedFPS;
@property float forgetDetectionsAfterSeconds;
@property BOOL runOnlyWhenDetectorDidRun;
@property (retain) NSSet *supportedDetectionTypes;
@property (retain) NSArray *inputSchemas;
@property (readonly) unsigned long long totalInputFloatCount;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_defaultSupportedDetectionTypes;
- (void)_processInputSchemaDicts:(id)a0;

@end
