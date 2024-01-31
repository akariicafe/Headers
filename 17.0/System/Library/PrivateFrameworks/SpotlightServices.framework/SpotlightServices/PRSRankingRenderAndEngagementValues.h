@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying> {
    short _renderValues[6];
    short _engagementValues[6];
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)incrementRankingValuesForType:(int)a0;
- (BOOL)getRankingValues:(short *)a0 withRankingValueSize:(unsigned long long)a1 forType:(int)a2;
- (id)initWithCoder:(id)a0;
- (void)setRankingValues:(short[6])a0 forType:(int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
