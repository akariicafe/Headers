@class NSArray;

@interface SCWZoneDiff : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *modifiedRecords;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (BOOL)hasSameBaseAsDiff:(id)a0;
- (id)applyToRecords:(id)a0;
- (id)initWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1;
- (void).cxx_destruct;
- (void)applyToModifyRecordsOperation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
