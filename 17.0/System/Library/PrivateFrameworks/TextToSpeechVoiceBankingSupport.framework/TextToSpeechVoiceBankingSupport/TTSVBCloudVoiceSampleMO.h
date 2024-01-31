@class NSString, TTSVBCloudVoiceMO, NSDate;
@protocol _NSFileBackedFuture;

@interface TTSVBCloudVoiceSampleMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, copy) NSString *bookTitle;
@property (nonatomic) double estimatedDuration;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) int paragraphIndex;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic) double recordingDuration;
@property (nonatomic, copy) NSString *sampleID;
@property (nonatomic) int sentenceIndex;
@property (nonatomic, copy) NSString *transcript;
@property (nonatomic, copy) NSString *userPhrase;
@property (nonatomic, copy) NSDate *recordingDate;
@property (nonatomic) short userScore;
@property (nonatomic, retain) TTSVBCloudVoiceMO *voice;
@property (nonatomic) float spl;
@property (nonatomic) float snr;
@property (nonatomic) float splThreshold;
@property (nonatomic) float snrThreshold;
@property (nonatomic) int flags_;
@property (nonatomic, retain) id<_NSFileBackedFuture> audioFuture;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
