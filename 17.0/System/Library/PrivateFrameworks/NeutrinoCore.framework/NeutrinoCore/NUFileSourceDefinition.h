@class NSURL, NSString;

@interface NUFileSourceDefinition : NUSingleSourceDefinition

@property (readonly) NSURL *url;
@property (readonly) NSString *uti;
@property (nonatomic) BOOL useEmbeddedPreview;

- (id)init;
- (id)description;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 UTI:(id)a1;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
