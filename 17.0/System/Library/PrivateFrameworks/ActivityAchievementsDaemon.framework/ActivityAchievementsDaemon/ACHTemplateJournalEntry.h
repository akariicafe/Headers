@class ACHTemplate;

@interface ACHTemplateJournalEntry : HDJournalEntry

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) ACHTemplate *template;
@property (nonatomic) long long provenance;
@property (readonly, nonatomic) BOOL useLegacySyncIdentity;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTemplate:(id)a0 provenance:(long long)a1 useLegacySyncIdentity:(BOOL)a2 action:(long long)a3;

@end
