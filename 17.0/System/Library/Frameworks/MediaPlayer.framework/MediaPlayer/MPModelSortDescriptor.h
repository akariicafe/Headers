@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSArray *keyPath;

+ (id)sortDescriptorWithKeyPath:(id)a0 ascending:(BOOL)a1;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
