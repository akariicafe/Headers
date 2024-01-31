@class ARAnchor, NSUUID;

@interface ARRaycastResult : NSObject

@property (nonatomic) long long target;
@property (retain, nonatomic) ARAnchor *anchor;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } localTransform;
@property (retain, nonatomic) NSUUID *anchorIdentifier;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } worldTransform;
@property (readonly, nonatomic) long long targetAlignment;

- (id)description;
- (void).cxx_destruct;
- (id)_description:(BOOL)a0;
- (id)initWithWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 target:(long long)a1 targetAlignment:(long long)a2;

@end
