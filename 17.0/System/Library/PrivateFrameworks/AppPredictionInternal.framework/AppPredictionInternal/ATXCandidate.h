@protocol BMStoreData;

@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> biomeStoreData;

- (id)init;
- (id)detailedDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)type;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)suggestionExecutableType;
- (id)initWithBiomeStoreData:(id)a0;
- (BOOL)isEqualToATXCandidate:(id)a0;

@end
