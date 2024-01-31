@class NSUUID, NSNumber, CLMiLoPlaceMetadata;

@interface CLMiLoPlace : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) CLMiLoPlaceMetadata *metadata;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlaceIdentifier:(id)a0 score:(id)a1 confidence:(unsigned long long)a2 placeMetadata:(id)a3;

@end
