@class NSUUID, NSString;

@interface ARAnchor : NSObject <ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceTransform;
@property (nonatomic) double lastUpdateTimestamp;
@property (readonly, nonatomic) BOOL isHiddenFromPublicDelegate;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *name;

- (id)debugQuickLookObject;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithAnchor:(id)a0;
- (void)_commonInit:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 name:(id)a2;
- (id)_description:(BOOL)a0;
- (id)copyWithTrackedState:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 name:(id)a2;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 name:(id)a2 hiddenFromPublicDelegate:(BOOL)a3;
- (id)initWithName:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (BOOL)isEqualToAnchor:(id)a0;
- (void)updateTransformToCoordinateSpace:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 withTimestamp:(double)a1;

@end
