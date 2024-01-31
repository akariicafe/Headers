@class NSData;

@interface CTTransportKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int index;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *key_epki;
@property (retain, nonatomic) NSData *retiredKey_epki;
@property (nonatomic) BOOL last_resort;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKey:(id)a0 epki:(id)a1 forIdx:(int)a2 toReplace:(id)a3 epki:(id)a4;
- (id)initWithKey:(id)a0 epki:(id)a1 forIdx:(int)a2 toReplaceEpki:(id)a3 isLastResort:(BOOL)a4;
- (id)initWithKey:(id)a0 forIdx:(int)a1 toReplace:(id)a2;

@end
