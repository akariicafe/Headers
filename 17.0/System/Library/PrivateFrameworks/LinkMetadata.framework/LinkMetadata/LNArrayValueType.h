@class LNValueType;

@interface LNArrayValueType : LNValueType

@property (readonly, copy, nonatomic) LNValueType *memberValueType;
@property (readonly, nonatomic) long long capabilities;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (id)initWithMemberValueType:(id)a0;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
