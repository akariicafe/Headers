@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) CIImage *image;
@property (readonly) long long orientation;

- (id)init;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)initWithCIImage:(id)a0 orientation:(long long)a1;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
