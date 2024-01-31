@class NSArray;

@interface CLMiLoServicePlacePrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *places;
@property (readonly, nonatomic) unsigned long long serviceType;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlaces:(id)a0 serviceType:(unsigned long long)a1;

@end
