@class NSString, NSDate;

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canNotify;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *activatedDate;
@property (copy, nonatomic) NSDate *firstViewedDate;
@property (copy, nonatomic) NSDate *featuredDate;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
