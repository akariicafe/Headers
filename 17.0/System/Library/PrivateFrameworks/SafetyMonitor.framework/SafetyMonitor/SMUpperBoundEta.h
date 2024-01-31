@class NSDate;

@interface SMUpperBoundEta : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *mapsUpperBoundEta;
@property (readonly, nonatomic) NSDate *crowFliesUpperBoundEta;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMapsUpperBoundEta:(id)a0 crowFliesUpperBoundEta:(id)a1;

@end
