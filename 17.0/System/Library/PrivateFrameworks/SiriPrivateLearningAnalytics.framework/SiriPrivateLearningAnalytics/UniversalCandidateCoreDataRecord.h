@class UniversalSuggestionCoreDataRecord, NSUUID, UniversalRuntimeSuggestionCoreDataRecord, NSData;

@interface UniversalCandidateCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *candidateEntity;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) double lastSurfaced;
@property (nonatomic) double lastUpdated;
@property (nonatomic) double score;
@property (nonatomic, retain) UniversalSuggestionCoreDataRecord *candidateForUniversalSuggestion;
@property (nonatomic, retain) UniversalRuntimeSuggestionCoreDataRecord *topCandidateForUniversalRuntimeSuggestion;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
