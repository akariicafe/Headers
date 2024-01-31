@interface NUCGImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) struct CGImageSource { } *imageSource;

- (id)init;
- (void)dealloc;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithCGImageSource:(struct CGImageSource { } *)a0;

@end
