@class NSString, NSDate;

@interface CPLEngineScope : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) long long localIndex;
@property (nonatomic) long long cloudIndex;
@property (nonatomic) long long stableIndex;
@property (readonly, nonatomic) NSString *scopeIdentifier;
@property (readonly, nonatomic) long long scopeType;

+ (void)formatStatusDictionary:(id)a0 forScopeWithIdentifier:(id)a1 appendString:(id /* block */)a2 appendTopLevelStatus:(id /* block */)a3 appendLineStatus:(id /* block */)a4;
+ (id)separatorForStatusKey:(id)a0;

- (unsigned long long)hash;
- (id)statusDescription;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScopeIdentifier:(id)a0 scopeType:(long long)a1;

@end
