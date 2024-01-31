@class NSArray, NSString, GEOComposedString, GEOComposedWaypoint;
@protocol GEOServerFormattedString;

@interface MNListInstructionContents : NSObject <MNInstructionContents> {
    int _maneuverType;
    NSString *_intersectionName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    BOOL _toFreeway;
    NSArray *_instructionStrings;
}

@property (nonatomic) int transportType;
@property (nonatomic) double distance;
@property (retain, nonatomic) id<GEOServerFormattedString> distanceFormat;
@property (retain, nonatomic) NSArray *instructionFormats;
@property (retain, nonatomic) GEOComposedString *distanceString;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (retain, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (nonatomic) BOOL suppressFallback;

+ (id)contentsWithStep:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)instruction;
- (unsigned long long)_distanceFormatOptions;
- (id)_evaluatedStringsForInstructionStrings:(id)a0;
- (id)_instructionsForFormats:(id)a0;
- (void)_populateFromStep:(id)a0;
- (id)instructionWithShorterAlternatives;
- (id)stringForDistance:(double)a0;

@end
