@class NSDictionary, NSArray, CHStrokeClutterFilter, NSString, CHStrokeGroupingResult, CHStrokeClassificationResult, NSData;
@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding> {
    long long __transcriptionCapability;
    NSData *_encodedStrokeProviderVersion;
    BOOL __shouldUseCachedHasCompleteRecognitionResults;
    BOOL __hasCompleteRecognitionResults;
    NSDictionary *__recognitionResultsByGroupID;
    NSDictionary *__textCorrectionResultsByGroupID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly, nonatomic) NSArray *orderedStrokeIdentifiers;
@property (readonly, nonatomic) long long sessionMode;
@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, copy, nonatomic) NSArray *preferredLocales;
@property (readonly, nonatomic) CHStrokeClutterFilter *clutterFilter;
@property (readonly, nonatomic) long long recognitionEnvironment;
@property (readonly, nonatomic) CHStrokeClassificationResult *strokeClassificationResult;
@property (readonly, nonatomic) CHStrokeGroupingResult *strokeGroupingResult;
@property (readonly, nonatomic) struct { double strokeClutterFilteringDuration; double strokeClassificationDuration; double groupingDuration; double recognitionDuration; double totalDuration; } generationDuration;
@property (readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property (readonly, nonatomic) NSString *allResultsDebugDescription;
@property (readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;

+ (id)loadFromFile:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)writeToFile;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(id /* block */)a0;
- (id)contextualResultsWithFullyCoveredStrokeGroups:(id)a0 partiallyCoveredStrokeGroups:(id)a1 drawingCanvasSize:(struct CGSize { double x0; double x1; })a2;
- (id)encodedStrokeProviderVersion;
- (id)fullyCoveredStrokeGroupsForContextStrokes:(id)a0 partiallyCoveredStrokeGroups:(id *)a1;
- (BOOL)hasCompleteRecognitionResults;
- (id)initWithResult:(id)a0 validStrokes:(id)a1;
- (id)initWithStrokeProviderVersion:(id)a0 encodedStrokeProviderVersion:(id)a1 orderedStrokeIdentifiers:(id)a2 sessionMode:(long long)a3 locales:(id)a4 preferredLocales:(id)a5 clutterFilter:(id)a6 strokeClassificationResult:(id)a7 strokeGroupingResult:(id)a8 recognitionResults:(id)a9 inlineContinuousModeResults:(id)a10 generationDuration:(struct { double x0; double x1; double x2; double x3; double x4; })a11 recognitionEnvironment:(long long)a12;
- (BOOL)isEqualToSerializableRecognitionSessionResult:(id)a0;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)a0;
- (id)textCorrectionResultForStrokeGroupIdentifier:(long long)a0;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;

@end
