@class NSString, PHFaceprint;

@interface PHFaceClusteringProperties : PHFacePropertySet

@property (readonly, nonatomic) PHFaceprint *faceprint;
@property (readonly, nonatomic) NSString *groupingIdentifier;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 face:(id)a1 prefetched:(BOOL)a2;

@end
