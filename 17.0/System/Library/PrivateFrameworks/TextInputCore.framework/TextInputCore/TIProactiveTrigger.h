@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (readonly, nonatomic) NSDictionary *attributes;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceType:(unsigned char)a0 attributes:(id)a1;

@end
