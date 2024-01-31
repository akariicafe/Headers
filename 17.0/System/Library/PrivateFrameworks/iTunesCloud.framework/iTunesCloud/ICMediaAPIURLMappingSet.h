@class NSArray;

@interface ICMediaAPIURLMappingSet : NSObject {
    NSArray *_responsePayload;
}

@property (readonly, copy, nonatomic) NSArray *responsePayload;

- (void).cxx_destruct;
- (void)enumerateMappingsUsingBlock:(id /* block */)a0;
- (id)initWithResponsePayload:(id)a0;
- (id)mappingsForFeatureName:(id)a0;

@end
