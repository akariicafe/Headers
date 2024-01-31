@interface TISKEmojiSwitchEvent : TISKTimestampEvent

- (id)description;
- (id)init:(double)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;
- (void)reportToSession:(id)a0;

@end
