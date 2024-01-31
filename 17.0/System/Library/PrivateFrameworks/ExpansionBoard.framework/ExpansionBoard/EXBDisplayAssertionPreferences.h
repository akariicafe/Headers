@class NSString, EXBDisplayArrangementItem;

@interface EXBDisplayAssertionPreferences : NSObject <NSCopying>

@property (nonatomic) BOOL wantsControlOfDisplay;
@property (retain, nonatomic) EXBDisplayArrangementItem *displayArrangement;
@property (copy, nonatomic) NSString *disableSystemIdleSleepReason;
@property (nonatomic) unsigned long long cloneMirroringMode;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
