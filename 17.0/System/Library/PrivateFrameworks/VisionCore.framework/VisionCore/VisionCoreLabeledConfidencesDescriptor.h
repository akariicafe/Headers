@class NSURL, NSArray, NSIndexSet;

@interface VisionCoreLabeledConfidencesDescriptor : VisionCoreTensorDescriptor {
    NSArray *_lazilyAcquiredLabels;
    NSIndexSet *_lazilyAcquiredValidLabelIndexs;
}

@property (readonly, nonatomic) Class labelsFileParserClass;
@property (readonly, nonatomic) NSURL *labelsFileURL;
@property (readonly, copy) NSArray *labels;
@property (readonly) unsigned long long validLabelsCount;
@property (readonly, copy) NSIndexSet *validLabelIndexes;
@property (readonly, copy) NSArray *sortedValidLabels;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 shape:(id)a2 strides:(id)a3 labelsFileURL:(id)a4;

@end
