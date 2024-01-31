@class NSString, NSObject;

@interface MLKNearestNeighborsClassifierParameters : NSObject

@property unsigned long long numberOfDimensions;
@property long long weightingScheme;
@property long long indexType;
@property unsigned long long leafSize;
@property (retain) NSObject *defaultLabel;
@property (retain) NSString *nearestLabelsFeatureName;
@property (retain) NSString *nearestDistancesFeatureName;

- (void).cxx_destruct;

@end
