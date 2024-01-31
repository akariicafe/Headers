@class NSString, UIShape;
@protocol UIHoverEffect;

@interface UIHoverStyle : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _cachedBridgedEffect;
    void /* unknown type, empty encoding */ _effect;
    void /* unknown type, empty encoding */ _cachedBridgedShape;
    void /* unknown type, empty encoding */ _shape;
    void /* unknown type, empty encoding */ _isEnabled;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ driverCoordinator;
}

@property (nonatomic, readonly) NSString *verboseDescription;
@property (nonatomic) BOOL enabled;
@property (nonatomic, retain) id<UIHoverEffect> effect;
@property (nonatomic, retain) UIShape *shape;
@property (nonatomic, readonly) NSString *description;

+ (id)automaticStyle;
+ (id)styleWithShape:(id)a0;
+ (id)styleWithEffect:(id)a0 shape:(id)a1;

- (id)init;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)styleWithShape:(id)a0;
- (void)_invalidateAutomaticHoverEffect;
- (void)_invalidateAutomaticHoverShape;
- (id)styleWithEffect:(id)a0 shape:(id)a1;

@end
