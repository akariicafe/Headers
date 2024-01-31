@class NSString, NSArray;

@interface LKClassGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *classGroupName;
@property (readonly, copy, nonatomic) NSArray *classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClassGroupDictionary:(id)a0 classesDictionaryByClassID:(id)a1;
- (id)initWithGroupName:(id)a0 classes:(id)a1;
- (BOOL)isEqualToLKClassGroup:(id)a0;

@end
