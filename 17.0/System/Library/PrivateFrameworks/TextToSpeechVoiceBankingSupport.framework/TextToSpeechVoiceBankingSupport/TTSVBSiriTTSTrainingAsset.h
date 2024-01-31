@class NSString, SiriTTSTrainingAsset, NSNumber;

@interface TTSVBSiriTTSTrainingAsset : NSObject

@property (readonly, nonatomic) SiriTTSTrainingAsset *asset;
@property (retain, nonatomic) SiriTTSTrainingAsset *asset;
@property (readonly, nonatomic) NSString *factor;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *diskSize;

- (void).cxx_destruct;
- (id)initWithSiriTTSTrainingAsset:(id)a0;

@end
