@interface HDSimpleGraphObject : NSObject

@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) unsigned long long slots;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRowID:(long long)a0 version:(long long)a1 slots:(unsigned long long)a2 deleted:(BOOL)a3;

@end
