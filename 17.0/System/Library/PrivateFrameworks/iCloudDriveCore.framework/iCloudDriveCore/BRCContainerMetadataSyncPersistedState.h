@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState

@property (readonly, nonatomic) NSDate *lastSyncDownDate;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) BOOL needsContainerMetadataSyncDown;
@property (nonatomic) BOOL needsSharedDBSyncDown;
@property (nonatomic) BOOL hasCaughtUpAtLeastOnce;
@property (readonly, nonatomic) unsigned long long requestID;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)allocateNextRequestID;
- (void)containerMetadataWasReset;
- (void)updateWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;

@end
