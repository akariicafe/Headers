@class NSString, AceObject, AFBulletin, NSDictionary, NSArray;

@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier;
@property (readonly, copy, nonatomic) AFBulletin *bulletin;
@property (readonly, copy, nonatomic) AceObject *aceContext;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly, copy, nonatomic) NSArray *aceContexts;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssociatedBundleIdentifier:(id)a0 bulletin:(id)a1 aceContext:(id)a2 contextDictionary:(id)a3 aceContexts:(id)a4;

@end
