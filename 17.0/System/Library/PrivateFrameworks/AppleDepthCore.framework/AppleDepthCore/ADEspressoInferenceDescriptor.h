@class NSURL, NSDictionary;

@interface ADEspressoInferenceDescriptor : NSObject {
    NSDictionary *_layoutNames;
}

@property (readonly, nonatomic) NSURL *networkURL;

- (void).cxx_destruct;
- (id)configurationNameForLayout:(unsigned long long)a0;
- (id)initWithUrl:(id)a0 layoutNames:(id)a1;

@end
