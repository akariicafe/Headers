@interface RCPEventAction : NSObject <NSCoding, NSCopying>

+ (id)actionToSetPointerAbsoluteLocation:(struct CGPoint { double x0; double x1; })a0 environment:(id)a1;
+ (id)actionToSetPointerCurrentAbsoluteLocation;

- (void)play;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
