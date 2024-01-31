@class PSMatchMoveSource, PSPortalSource;

@interface PSPointerPortalSourceCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int sourceContextID;
@property (nonatomic) BOOL shouldBeInvalidatedIfPointerLeavesDisplay;
@property (readonly, copy, nonatomic) PSPortalSource *overlayEffectPortalSource;
@property (readonly, copy, nonatomic) PSPortalSource *pointerPortalSource;
@property (readonly, copy, nonatomic) PSMatchMoveSource *samplingMatchMoveSource;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPointerPortalSource:(id)a0 overlayEffectPortalSource:(id)a1 samplingMatchMoveSource:(id)a2;

@end
