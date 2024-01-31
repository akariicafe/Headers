@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition

@property (readonly) struct { long long width; long long height; } size;
@property (readonly) long long orientation;

- (id)init;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 orientation:(long long)a1;

@end
