@class AVOutputSettings;

@interface AVFormatSpecification : NSObject {
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription { } *_sourceFormatDescription;
}

+ (id)formatSpecificationWithOutputSettings:(id)a0 sourceFormatDescription:(struct opaqueCMFormatDescription { } *)a1;

- (void)dealloc;
- (struct opaqueCMFormatDescription { } *)sourceFormatDescription;
- (id)initWithOutputSettings:(id)a0 sourceFormatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (id)outputSettings;

@end
