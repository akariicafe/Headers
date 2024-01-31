@class NSString, NSData, NSDate, CKRecord;

@interface FCPuzzleHistoryItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *puzzleID;
@property (readonly, copy, nonatomic) NSString *puzzleTypeID;
@property (readonly, nonatomic) NSData *progressData;
@property (readonly, nonatomic) long long progressLevel;
@property (readonly, nonatomic) long long playDuration;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) NSDate *completedDate;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntryID:(id)a0 puzzleID:(id)a1 puzzleTypeID:(id)a2 progressData:(id)a3 progressLevel:(long long)a4 playDuration:(long long)a5 lastPlayedDate:(id)a6 completedDate:(id)a7;

@end
