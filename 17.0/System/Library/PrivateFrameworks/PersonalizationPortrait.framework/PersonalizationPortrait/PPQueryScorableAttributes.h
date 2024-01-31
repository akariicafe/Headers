@class NSNumber, NSData, NSDictionary;

@interface PPQueryScorableAttributes : NSObject

@property (retain, nonatomic) NSNumber *portraitStaticScore;
@property (retain, nonatomic) NSData *portraitFeatureVector;
@property (retain, nonatomic) NSNumber *portraitFeatureVectorVersion;
@property (retain, nonatomic) NSDictionary *portraitNamedEntities;

- (void).cxx_destruct;

@end
