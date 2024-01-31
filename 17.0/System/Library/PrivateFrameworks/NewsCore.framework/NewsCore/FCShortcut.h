@class NSString, NSDate, NSNumber, CKRecord;

@interface FCShortcut : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, copy, nonatomic) NSNumber *order;
@property (readonly, nonatomic) unsigned long long shortcutType;
@property (readonly, nonatomic, getter=isDeprecated) BOOL deprecated;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 dateAdded:(id)a1 order:(id)a2 shortcutType:(unsigned long long)a3;

@end
