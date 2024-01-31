@class RBAnimation, NSArray;

@interface RBTransition : NSObject <NSCopying> {
    struct refcounted_ptr<RB::Transition> { struct Transition *_p; } _transition;
    BOOL _is_default;
}

@property (class, readonly, nonatomic) RBTransition *defaultTransition;

@property (nonatomic) unsigned int method;
@property (retain, nonatomic) RBAnimation *animation;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic, getter=isReplaceable) BOOL replaceable;
@property (readonly, copy, nonatomic) NSArray *effects;
@property (nonatomic) float addRemoveDuration;

- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addEffect:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
