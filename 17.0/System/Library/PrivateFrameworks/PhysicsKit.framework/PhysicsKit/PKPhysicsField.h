@class PKRegion;
@protocol NSObject;

@interface PKPhysicsField : NSObject {
    struct shared_ptr<PKCField> { struct PKCField *__ptr_; struct __shared_weak_count *__cntrl_; } _field;
    PKRegion *_region;
    void /* unknown type, empty encoding */ _position;
    float _rotation;
    void /* unknown type, empty encoding */ _scale;
}

@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isOverride) BOOL override;
@property (retain, nonatomic) id region;
@property (nonatomic) void /* unknown type, empty encoding */ direction;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) float rotation;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) float minimumRadius;
@property (weak, nonatomic) id<NSObject> representedObject;

- (void)setActive:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isActive;
- (struct shared_ptr<PKCField> { struct PKCField *x0; struct __shared_weak_count *x1; })_field;
- (void)set_field:(struct shared_ptr<PKCField> { struct PKCField *x0; struct __shared_weak_count *x1; })a0;

@end
