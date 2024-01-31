@class NSString, NSURL;

@interface VATKeywordSpotterResult : NSObject {
    NSString *_keywordText;
}

@property (nonatomic) NSString *keyword;
@property (nonatomic) float threshold;
@property (nonatomic) float cost;
@property (nonatomic) int start;
@property (nonatomic) int end;
@property (nonatomic) int duration;
@property (nonatomic) int audioStart;
@property (nonatomic) int audioEnd;
@property (nonatomic) double audioDuration;
@property (copy, nonatomic) NSString *secondPassResult;
@property (nonatomic) double secondPassDuration;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic) BOOL _isNbestEntry;

- (id)description;
- (void).cxx_destruct;
- (id)toJSON;
- (id)initWithKeyword:(id)a0 cost:(float)a1 threshold:(float)a2 start:(int)a3 end:(int)a4 duration:(int)a5;

@end
