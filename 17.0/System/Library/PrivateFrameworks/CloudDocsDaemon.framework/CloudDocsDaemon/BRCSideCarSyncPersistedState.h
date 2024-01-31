@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCSideCarSyncPersistedState : BRCPersistedState

@property (readonly) NSDate *lastSyncDownDate;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (readonly, nonatomic) unsigned long long requestID;
@property (nonatomic) BOOL needsSync;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)allocateNextRequestID;
- (id)initWithZoneHealthState:(id)a0;
- (void)sideCarZoneWasReset;
- (void)updateWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;

@end
