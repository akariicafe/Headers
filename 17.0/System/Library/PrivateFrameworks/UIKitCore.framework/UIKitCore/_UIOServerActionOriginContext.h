@class NSString;

@interface _UIOServerActionOriginContext : NSObject <NSSecureCoding, NSMutableCopying, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sceneIdentity;
@property (readonly, copy, nonatomic) NSString *displayIdentifier;
@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) unsigned long long layerId;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } layerReferencePoint;

+ (id)defaultOriginContext;
+ (id)originContextForView:(id)a0 referencePoint:(struct CGPoint { double x0; double x1; })a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_configureWithWindow:(id)a0;
- (struct CGPoint { double x0; double x1; })translatedReferencePointForDestinationView:(id)a0;

@end
