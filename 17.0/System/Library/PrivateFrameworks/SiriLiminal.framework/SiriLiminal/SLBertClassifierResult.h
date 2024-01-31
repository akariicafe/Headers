@class NSArray, NSString, NSDictionary;

@interface SLBertClassifierResult : NSObject

@property (readonly, nonatomic) NSArray *domainProb;
@property (readonly, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSDictionary *extractedFeats;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithScore:(id)a0 assetVersion:(id)a1 extractedFeats:(id)a2;

@end
