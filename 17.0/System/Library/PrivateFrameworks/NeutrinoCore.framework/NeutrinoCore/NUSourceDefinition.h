@class NSDictionary;

@interface NUSourceDefinition : NSObject

@property (copy, nonatomic) NSDictionary *sourceOptions;

- (long long)mediaType;
- (void).cxx_destruct;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
