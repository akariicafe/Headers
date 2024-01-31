@class NSArray;

@interface SBHStackConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsSuggestions;
@property (nonatomic) BOOL allowsExternalSuggestions;
@property (copy, nonatomic) NSArray *dataSources;
@property (nonatomic) unsigned long long sizeClass;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
