@class SFCodingOptions;

@interface SFCoder : NSObject {
    id _coderInternal;
}

@property (copy, nonatomic) SFCodingOptions *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)encodeTopLevelValue:(id)a0 error:(id *)a1;

@end
