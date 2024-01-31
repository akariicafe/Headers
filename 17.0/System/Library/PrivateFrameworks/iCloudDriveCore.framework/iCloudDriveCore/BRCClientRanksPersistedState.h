@interface BRCClientRanksPersistedState : BRCPersistedState {
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
    unsigned long long _telemetryMinRowID;
    long long _telemetryToken;
}

@property (readonly, nonatomic) unsigned long long nextItemRowID;
@property (nonatomic) unsigned long long nextNotifRank;
@property (nonatomic) unsigned long long nextPackageItemRank;
@property (nonatomic) unsigned long long telemetryMinRowID;
@property (nonatomic) long long telemetryToken;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)allocateItemRowID;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocatePackageItemRank;

@end
