@class NSString, NSNumber, NSArray;

@interface ICASDeviceSnapshotData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *userStartMonth;
@property (readonly, nonatomic) NSNumber *userStartYear;
@property (readonly, nonatomic) NSString *saltVersion;
@property (readonly, nonatomic) NSArray *accountTypeSummary;
@property (readonly, nonatomic) NSArray *collabFoldersSummary;
@property (readonly, nonatomic) NSNumber *totalCountOfPinnedNotes;
@property (readonly, nonatomic) NSArray *deviceSnapshotSummary;
@property (readonly, nonatomic) NSArray *userSnapshotSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUserStartMonth:(id)a0 userStartYear:(id)a1 saltVersion:(id)a2 accountTypeSummary:(id)a3 collabFoldersSummary:(id)a4 totalCountOfPinnedNotes:(id)a5 deviceSnapshotSummary:(id)a6 userSnapshotSummary:(id)a7;

@end
