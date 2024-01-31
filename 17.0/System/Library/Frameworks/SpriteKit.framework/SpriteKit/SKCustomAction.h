@interface SKCustomAction : SKAction {
    struct SKCCustomAction { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; id /* block */ x19; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)customActionWithDuration:(double)a0 actionBlock:(id /* block */)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reversedAction;

@end
