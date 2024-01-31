@class NSUUID;

@interface MFDatePickerItemIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long type;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
