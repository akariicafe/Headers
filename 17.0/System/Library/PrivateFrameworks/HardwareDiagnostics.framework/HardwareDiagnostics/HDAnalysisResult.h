@class NSMutableArray, NSMutableDictionary;

@interface HDAnalysisResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *measuredResults;
@property (readonly, nonatomic) NSMutableDictionary *auxiliaryData;
@property (readonly, nonatomic) NSMutableDictionary *files;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAnalysisResult:(id)a0;

@end
