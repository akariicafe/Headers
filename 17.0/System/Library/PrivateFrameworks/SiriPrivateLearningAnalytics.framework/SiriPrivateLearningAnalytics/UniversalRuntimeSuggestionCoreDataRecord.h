@class NSUUID, NSString, UniversalCandidateCoreDataRecord;

@interface UniversalRuntimeSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) BOOL needsDisambiguation;
@property (nonatomic, copy) NSString *queryEntityName;
@property (nonatomic, retain) UniversalCandidateCoreDataRecord *topCandidate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
