@class NSUUID, NSArray, NSDictionary;

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_activityMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *pairingIdentifier;
@property (nonatomic) long long switchIndex;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long syncSessionType;
@property (nonatomic) BOOL supportsMigrationSync;
@property (retain, nonatomic) NSArray *activities;
@property (nonatomic) unsigned long long syncSessionState;
@property (readonly, nonatomic) double sessionProgress;

- (unsigned long long)hash;
- (id)runningActivities;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)syncSessionByReplacingActivity:(id)a0;
- (id)activityForLabel:(id)a0;
- (id)activityForService:(id)a0;
- (id)completedActivities;
- (id)completedActivityLabelsSet;
- (id)firstIncompleteActivity;
- (id)incompleteActivities;
- (id)initWithPairingIdentifier:(id)a0 switchIndex:(long long)a1 sessionIdentifier:(id)a2 syncSessionType:(unsigned long long)a3 supportsMigrationSync:(BOOL)a4 activities:(id)a5 state:(unsigned long long)a6;
- (id)syncSessionByUpdatingActivities:(id)a0;
- (id)syncSessionByUpdatingSyncSessionState:(unsigned long long)a0;

@end
