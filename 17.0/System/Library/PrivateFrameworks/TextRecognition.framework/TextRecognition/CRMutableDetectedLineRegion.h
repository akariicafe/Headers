@class NSString, NSUUID, CRNormalizedPolyline, CRNormalizedQuad, NSArray, NSObject, NSDictionary;
@protocol CRScriptCategory;

@interface CRMutableDetectedLineRegion : CRDetectedLineRegion

@property (retain) CRNormalizedQuad *boundingQuad;
@property unsigned long long layoutDirection;
@property BOOL isCurved;
@property (retain) NSUUID *uuid;
@property (retain) CRNormalizedPolyline *polygon;
@property BOOL shouldRunSequenceScript;
@property BOOL shouldRunSequenceOrientation;
@property (retain) NSArray *scriptCategoryResults;
@property (retain) NSObject<CRScriptCategory> *topScriptCategory;
@property (retain) NSDictionary *scriptCategoryCounts;
@property (retain) NSString *sequenceScriptOutputResult;
@property unsigned long long nmsOutputScale;
@property unsigned long long textType;

- (void)rotate180;

@end
