@class NSData;

@interface HDCachedSecureCKRecordJournalEntry : HDJournalEntry

@property (nonatomic) long long recordID;
@property (retain, nonatomic) NSData *recordData;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
