@class NSUUID, NSString, NSArray, CRImageSpaceQuad, CRNormalizedQuad, NSMutableArray, CRVCQuad, NSNumber;

@interface CRTrackedRegionGroup : NSObject <CRTrackingAssociatable> {
    BOOL _isInlineGroup;
    BOOL _isTextLeftJustified;
    BOOL _isTextRightJustified;
    NSMutableArray *_regionTrackingIDs;
    NSMutableArray *_children;
    unsigned long long _numberOfLines;
    CRVCQuad *_vcQuad;
    double _lastOriginalBoundingQuadUpdateTime;
    unsigned long long _layoutDirection;
    NSNumber *_averageLineHeight;
    NSUUID *_uuid;
    unsigned long long _groupChildrenAlignment;
}

@property (retain) NSUUID *trackingID;
@property (readonly) NSArray *regionTrackingIDs;
@property (readonly) NSArray *children;
@property (readonly) unsigned long long numberOfLines;
@property (readonly) CRVCQuad *vcQuad;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) CRNormalizedQuad *originalBoundingQuad;
@property (readonly) double lastOriginalBoundingQuadUpdateTime;
@property struct { void /* unknown type, empty encoding */ columns[3]; } boundingQuadHomography;
@property (retain) NSNumber *homographyGroupID;
@property double initialOrthogonalityScore;
@property unsigned long long textAlignment;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) NSNumber *averageLineHeight;
@property (readonly) BOOL isInlineGroup;
@property BOOL trackNeedsReplacement;
@property (retain) CRNormalizedQuad *boundingQuadAtOCRDispatch;
@property (readonly) struct { void /* unknown type, empty encoding */ columns[3]; } boundingQuadHomographySinceOCRDispatch;
@property (retain) CRImageSpaceQuad *boundingQuadAfterOCR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupsFromOutputRegions:(id)a0;

- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;
- (BOOL)addGroupRegionIfValid:(id)a0 context:(id)a1;
- (BOOL)addInlineGroupIfValid:(id)a0;
- (void)applyHomographyTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 downscaleRate:(float)a1 shouldApply:(id /* block */)a2;
- (id)estimatedPerspectiveQuad;
- (void)updateBoundingQuadAfterOCR;
- (void)updatePreviousAssociationQuad;

@end
