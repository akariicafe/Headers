@class NSBundle;

@interface TTSVBSiriTTSTrainingWrapper : NSObject

@property (class, readonly, nonatomic) BOOL isSiriTrainingAvailable;
@property (class, readonly, nonatomic) NSBundle *siriTTSTrainingBundle;

@end
