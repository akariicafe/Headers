@class NSString, NSArray, NSData, CKRecord;

@interface FCPuzzleTypeSettingsEntry : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *puzzleTypeID;
@property (readonly, copy, nonatomic) NSData *settingsData;
@property (readonly, copy, nonatomic) NSArray *lastSeenPuzzleIDs;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 puzzleTypeID:(id)a1 settingsData:(id)a2 lastSeenPuzzleIDs:(id)a3;

@end
