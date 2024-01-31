@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int availability;
@property (readonly, copy, nonatomic) NSSet *supportedMediaTypes;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToCapabilities:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAvailability:(int)a0 supportedMediaTypes:(id)a1;

@end
