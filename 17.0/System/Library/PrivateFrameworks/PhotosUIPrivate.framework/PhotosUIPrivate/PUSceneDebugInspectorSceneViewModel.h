@class NSString, NSArray;

@interface PUSceneDebugInspectorSceneViewModel : NSObject

@property (readonly, nonatomic) NSString *keyword;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) double threshold;
@property (readonly, nonatomic) NSArray *synonyms;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long highConfidenceCount;
@property (nonatomic) double libraryCoverage;

- (id)description;
- (void).cxx_destruct;
- (id)concatenatedSynonyms;
- (id)initWithKeyword:(id)a0 synonyms:(id)a1 sceneIdentifier:(unsigned int)a2 indexed:(BOOL)a3 threshold:(double)a4;

@end
