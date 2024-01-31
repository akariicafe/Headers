@class NSUUID, NSObject;

@interface PPFixup49995922Tuple : NSObject <NSCopying>

@property (readonly, nonatomic) long long rowid;
@property (readonly, nonatomic) NSObject *record;
@property (readonly, nonatomic) NSUUID *dkUUID;

+ (id)tupleWithRowid:(long long)a0 record:(id)a1 dkUUID:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTuple:(id)a0;
- (id)initWithRowid:(long long)a0 record:(id)a1 dkUUID:(id)a2;

@end
