@class NSUUID, NSString;

@interface SBSAViewDescription : NSObject <SBSAInterfaceElementDescribing, NSCopying, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setInterfaceElementIdentifier:) NSUUID *interfaceElementIdentifier;
@property (nonatomic, setter=_setCenter:) struct CGPoint { double x; double y; } center;
@property (nonatomic, setter=_setBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic, setter=_setCornerRadius:) double cornerRadius;
@property (nonatomic, setter=_setAlpha:) double alpha;
@property (nonatomic, setter=_setScale:) struct CGSize { double width; double height; } scale;
@property (nonatomic, setter=_setBoundsVelocity:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double blurRadius;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyByPixelAligningGeometryWithScale:(double)a0;
- (id)initWithViewDescription:(id)a0;

@end
