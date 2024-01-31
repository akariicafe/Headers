@class NSUUID, NSData;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {
    BOOL _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    long long _provenance;
    long long _syncIdentity;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
