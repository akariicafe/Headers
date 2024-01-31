@class NSData, NSDictionary, NSString;
@protocol _PFStoryRecipeDisplayAssetNormalizationData;

@interface PFStoryRecipeDisplayAssetNormalization : NSObject <NSCopying> {
    id<_PFStoryRecipeDisplayAssetNormalizationData> _normalizationData;
}

@property (readonly, nonatomic) NSData *analysisData;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *tempTintProperties;
@property (readonly, nonatomic) NSDictionary *smartToneProperties;
@property (readonly, nonatomic) NSDictionary *highKeyProperties;
@property (readonly, nonatomic) NSDictionary *smartColorProperties;
@property (readonly, nonatomic) NSString *detailedDescription;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnalysisData:(id)a0;

@end
