@class NSUUID, NSDictionary, NSString;

@interface CRObject : NSObject <CRDataType, CREquatable, CRIdentifiable, CRCoding>

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) NSDictionary *fields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)CRProperties;
+ (id)keyFromSelector:(SEL)a0;

- (id)init;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (id)initWithIdentity:(id)a0 fields:(id)a1;
- (void)setFieldKey:(id)a0 value:(id)a1;
- (void)setupConstraintsFor:(id)a0 in:(id)a1;

@end
