@class NSUUID, NSDate;

@interface SMSessionMonitorState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long currentRegionState;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) BOOL triggerPending;
@property (nonatomic) BOOL triggerConfirmed;
@property (nonatomic) BOOL dirty;

+ (id)regionStateToString:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markDirty;
- (id)initWithSessionIdentifier:(id)a0 currentRegionState:(unsigned long long)a1 triggerPending:(BOOL)a2 triggerConfirmed:(BOOL)a3 date:(id)a4;

@end
