@interface TISKTimestampEvent : TISKEvent

@property (nonatomic) double timestamp;

- (double)touchDownTimestamp;
- (BOOL)isMissingATouch;
- (id)init:(int)a0 timestamp:(double)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3;
- (double)touchUpTimestamp;

@end
