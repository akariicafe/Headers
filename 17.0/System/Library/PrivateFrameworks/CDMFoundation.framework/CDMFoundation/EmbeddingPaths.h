@class NSString;

@interface EmbeddingPaths : NSObject

@property (readonly, nonatomic) NSString *srcVocabPath;
@property (readonly, nonatomic) NSString *modelPath;
@property (readonly, nonatomic) NSString *configPath;
@property (readonly, nonatomic) NSString *reformulationPath;

- (void).cxx_destruct;
- (id)initWithSrcVocabPath:(id)a0 modelPath:(id)a1 configPath:(id)a2 reformulationPath:(id)a3;

@end
