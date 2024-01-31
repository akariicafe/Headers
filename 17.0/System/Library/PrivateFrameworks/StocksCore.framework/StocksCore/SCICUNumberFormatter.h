@interface SCICUNumberFormatter : NSObject

- (id)formattedCount:(long long)a0;
- (id)formattedCount:(long long)a0 withLocale:(id)a1;
- (id)formattedCount:(long long)a0 withLocale:(id)a1 longform:(BOOL)a2;
- (id)formattedCount:(long long)a0 withLocale:(id)a1 longform:(BOOL)a2 compactDisplay:(BOOL)a3;

@end
