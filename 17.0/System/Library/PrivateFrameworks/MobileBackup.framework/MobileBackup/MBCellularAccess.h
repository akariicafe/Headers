@interface MBCellularAccess : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) BOOL allowsConstrainedNetworkAccess;

+ (id)expensiveCellularAccess;
+ (id)inexpensiveCellularAccess;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
