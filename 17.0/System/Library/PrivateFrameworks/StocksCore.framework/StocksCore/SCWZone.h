@class NSArray, SCWZoneDiff, SCWZoneSchema;
@protocol SCWZoneStore;

@interface SCWZone : NSObject

@property (retain, nonatomic) id<SCWZoneStore> store;
@property (readonly, nonatomic) SCWZoneSchema *schema;
@property (readonly, copy, nonatomic) NSArray *clientRecords;
@property (readonly, copy, nonatomic) SCWZoneDiff *clientDiff;
@property (readonly, nonatomic) BOOL needsFirstSync;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0 store:(id)a1;

@end
