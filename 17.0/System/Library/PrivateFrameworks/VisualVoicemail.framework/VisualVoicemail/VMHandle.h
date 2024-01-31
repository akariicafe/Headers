@class NSString;

@interface VMHandle : NSObject <NSCopying, VMSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)initWithHandle:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithType:(long long)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToHandle:(id)a0;

@end
