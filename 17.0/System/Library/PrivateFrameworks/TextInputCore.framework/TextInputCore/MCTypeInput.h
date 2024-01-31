@class NSString, NSArray;

@interface MCTypeInput : MCKeyboardInput

@property (readonly, copy, nonatomic) NSString *characters;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, copy, nonatomic) NSArray *nearbyKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canComposeNew:(id)a0;
- (id)initWithCharacters:(id)a0 nearbyKeys:(id)a1;
- (id)initWithCharacters:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 nearbyKeys:(id)a2 sourceKeyboardState:(id)a3;
- (id)shortDescriptionWithLeadingString:(id)a0;

@end
