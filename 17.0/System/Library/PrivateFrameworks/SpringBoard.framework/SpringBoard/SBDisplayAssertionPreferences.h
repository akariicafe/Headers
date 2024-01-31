@class NSString, SBDisplayArrangementItem, SBDisplayPowerLogEntry;

@interface SBDisplayAssertionPreferences : NSObject <NSCopying>

@property (nonatomic) BOOL wantsControlOfDisplay;
@property (retain, nonatomic) SBDisplayArrangementItem *displayArrangement;
@property (copy, nonatomic) NSString *disableSystemIdleSleepReason;
@property (copy, nonatomic) SBDisplayPowerLogEntry *powerLogEntry;
@property (nonatomic) unsigned long long cloneMirroringMode;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
