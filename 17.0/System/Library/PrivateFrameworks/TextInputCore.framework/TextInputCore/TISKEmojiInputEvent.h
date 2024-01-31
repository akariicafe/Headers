@class NSString;

@interface TISKEmojiInputEvent : TISKTimestampEvent

@property (retain, nonatomic) NSString *emojiBucketCategory;

- (id)description;
- (void).cxx_destruct;
- (id)init:(double)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2 emojiBucketCategory:(id)a3;
- (void)reportToSession:(id)a0;

@end
