@class NSArray, UIImage, CALayer;

@interface _SUICStreamingWord : NSObject

@property (retain, nonatomic) _SUICStreamingWord *previous;
@property (nonatomic) long long insertType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) NSArray *emojiRangesInText;
@property (nonatomic) double glyphLocationInWordX;
@property (retain, nonatomic) CALayer *wordLayer;
@property (retain, nonatomic) UIImage *beginImage;
@property (retain, nonatomic) UIImage *endImage;

- (id)init;
- (void).cxx_destruct;

@end
