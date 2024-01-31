@class NSString, NSDictionary, NSNumber;

@interface CDMEmbeddingConfigItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *embeddingModelPath;
@property (readonly, nonatomic) NSDictionary *embeddingModelMetadata;
@property (readonly, nonatomic) NSNumber *embeddingModelDimension;
@property (readonly, nonatomic) NSString *embeddingModelVersion;
@property (readonly, nonatomic) BOOL isStableEmbeddingModel;

+ (long long)getEmbeddingDimensionFromEmbeddingModelMetadata:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEmbeddingModelPath:(id)a0 isStableEmbeddingModel:(BOOL)a1;

@end
