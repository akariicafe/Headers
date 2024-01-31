@class NSString, GEOMapRegion, NSDate;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *locationDisplayString;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, copy, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableObjectProtocol;

- (id)initWithStorage:(id)a0;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end
