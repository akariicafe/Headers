@class NSString, SKAction;

@interface SKReferencedAction : SKAction {
    struct SKCReferencedAction { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct SKCAction *x19; } *_mycaction;
    SKAction *_referencedAction;
    NSString *_referencedActionName;
}

+ (BOOL)supportsSecureCoding;
+ (id)referenceActionWithName:(id)a0 duration:(double)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)setTimingFunction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDuration:(double)a0;
- (id)subactions;
- (void)_ensureReferencedAction;
- (id)reversedAction;
- (void)setTimingMode:(long long)a0;

@end
