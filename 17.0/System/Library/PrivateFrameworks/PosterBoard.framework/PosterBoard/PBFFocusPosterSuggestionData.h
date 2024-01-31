@class NSArray, NSMapTable;

@interface PBFFocusPosterSuggestionData : NSObject

@property (readonly, nonatomic) NSArray *previews;
@property (readonly, nonatomic) NSMapTable *previewsToSnapshotsMapTable;
@property (readonly, nonatomic) unsigned long long count;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithPreviews:(id)a0 previewsToSnapshotsMapTable:(id)a1;
- (id)previewForUniqueIdentifier:(id)a0;
- (id)snapshotForPoster:(id)a0;

@end
