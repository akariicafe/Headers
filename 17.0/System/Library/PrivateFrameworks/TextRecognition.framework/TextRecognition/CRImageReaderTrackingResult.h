@class NSArray;

@interface CRImageReaderTrackingResult : NSObject {
    unsigned long long _trackedRegionType;
}

@property (retain) NSArray *trackedRegions;
@property (retain) NSArray *regionTrackingGroups;
@property (retain) NSArray *updatedRegionIDs;
@property (retain) NSArray *removedRegionIDs;
@property (readonly) unsigned long long stabilityLevel;
@property (readonly) NSArray *addedRegionIDs;

- (void).cxx_destruct;
- (id)initWithTrackingLevel:(unsigned long long)a0;
- (void)markTracksNotConformingSameHomogrpahyUsingGroupsAtOCRDispatch:(BOOL)a0 ransacReprojError:(float)a1 markedQuadArea:(double)a2;
- (id)resultByUpdatingWithDocument:(id)a0 sceneHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 usesGroupedRegions:(BOOL)a2;

@end
