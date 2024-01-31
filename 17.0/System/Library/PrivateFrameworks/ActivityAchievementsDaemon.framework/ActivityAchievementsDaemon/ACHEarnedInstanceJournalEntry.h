@class ACHEarnedInstance;

@interface ACHEarnedInstanceJournalEntry : HDJournalEntry

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) ACHEarnedInstance *earnedInstance;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) BOOL useLegacySyncIdentity;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEarnedInstance:(id)a0 provenance:(long long)a1 useLegacySyncIdentity:(BOOL)a2 action:(long long)a3;

@end
