@interface SKSpeed : SKAction {
    struct SKCSpeed { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; BOOL x24; BOOL x25; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)speedBy:(double)a0 duration:(double)a1;
+ (id)speedTo:(double)a0 duration:(double)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reversedAction;

@end
