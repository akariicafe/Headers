@class NSUUID, NSString, NSArray, GEOJunctionView, NSData, GEOGuidanceEvent, GEOComposedString, NSMutableArray, GEOJunction, GEONameInfo;
@protocol GEOServerFormattedString, GEOTransitArtworkDataSource;

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding> {
    unsigned long long _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    NSMutableArray *_lanes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) BOOL hasSignGuidance;
@property (readonly, nonatomic) BOOL hasSpokenGuidance;
@property (readonly, nonatomic) BOOL hasJunctionView;
@property (readonly, nonatomic) BOOL hasArGuidance;
@property (readonly, nonatomic) unsigned long long stackRanking;
@property (readonly, nonatomic) NSArray *primarySignStrings;
@property (readonly, nonatomic) NSArray *secondarySignStrings;
@property (readonly, nonatomic) NSArray *spokenStrings;
@property (readonly, nonatomic) NSArray *primaryLaneStrings;
@property (readonly, nonatomic) NSArray *secondaryLaneStrings;
@property (readonly, nonatomic) GEOComposedString *arInstructionString;
@property (readonly, nonatomic) NSArray *signTitles;
@property (readonly, nonatomic) NSArray *signDetails;
@property (readonly, nonatomic) GEONameInfo *shieldInfo;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) GEOJunction *maneuverJunction;
@property (readonly, nonatomic) GEOJunctionView *junctionView;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkOverride;
@property (readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property (readonly, nonatomic) NSArray *announcements;
@property (readonly, nonatomic) double repetitionInterval;
@property (readonly, nonatomic) BOOL hasHaptics;
@property (readonly, nonatomic) BOOL isSticky;
@property (readonly, nonatomic) BOOL isImportant;
@property (readonly, nonatomic) BOOL isSpecial;
@property (readonly, nonatomic) NSArray *lanes;
@property (readonly, nonatomic) NSArray *laneTitles;
@property (readonly, nonatomic) NSArray *laneInstructions;
@property (readonly, nonatomic) int composedGuidanceEventType;
@property (readonly, nonatomic) BOOL isLaneGuidanceForManeuver;
@property (readonly, nonatomic) unsigned long long numChainedAnnouncements;
@property (readonly, nonatomic) id<GEOServerFormattedString> arInstruction;
@property (readonly, nonatomic) NSString *arArrowLabel;
@property (readonly, nonatomic) int arType;
@property (readonly, nonatomic) NSArray *gapRanges;
@property (readonly, nonatomic) NSData *serverRouteID;
@property (readonly, nonatomic) unsigned int stepID;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSString *roadName;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } startValidRouteCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } endValidRouteCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } coordinateForDistanceStrings;
@property (readonly, nonatomic) double startValidDistance;
@property (readonly, nonatomic) double endValidDistance;
@property (readonly, nonatomic) double distanceForStrings;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long sourceIndex;
@property (nonatomic) unsigned long long enrouteNoticeIndex;

- (unsigned long long)hash;
- (long long)comparePriority:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_junctionViewIDForData:(id)a0;
- (long long)compareFactoringInSpeed:(id)a0 speed:(double)a1;
- (double)desiredTimeGapToEvent:(id)a0 chained:(BOOL)a1;
- (double)endDistanceForSpeed:(double)a0;
- (id)initWithGeoGuidanceEvent:(id)a0 step:(id)a1 legIndex:(unsigned long long)a2 coordinates:(id)a3;
- (BOOL)isValidForSpeed:(double)a0;
- (double)startDistanceForSpeed:(double)a0;
- (double)triggerDistanceForSpeed:(double)a0 andDuration:(id /* block */)a1;

@end
