@class NSUUID, NSArray, CRNormalizedPolyline, CRNormalizedQuad, NSDictionary, NSObject, NSString;
@protocol CRScriptCategory;

@interface CRDetectedLineRegion : NSObject <CRDirectionalRegion, CRIdentifiable, NSCopying, NSMutableCopying>

@property (retain) CRNormalizedQuad *boundingQuad;
@property unsigned long long layoutDirection;
@property BOOL isCurved;
@property BOOL shouldRunSequenceScript;
@property BOOL shouldRunSequenceOrientation;
@property (retain) CRNormalizedPolyline *polygon;
@property (retain) NSArray *scriptCategoryResults;
@property (retain) NSObject<CRScriptCategory> *topScriptCategory;
@property (retain) NSDictionary *scriptCategoryCounts;
@property (retain) NSString *sequenceScriptOutputResult;
@property unsigned long long nmsOutputScale;
@property unsigned long long textType;
@property (retain) NSUUID *uuid;
@property (readonly) struct CGSize { double x0; double x1; } rectifiedSize;
@property (readonly) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_copyContentsToObject:(id)a0;
- (void)_rotate180;
- (id)rotated180;

@end
