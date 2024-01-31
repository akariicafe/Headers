@class NSNumber, NSMutableArray;

@interface USOMatchInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int matchSignalBitSet;
@property (retain, nonatomic) NSNumber *matchScore;
@property (retain, nonatomic) NSNumber *maxTokenCount;
@property (retain, nonatomic) NSNumber *matchedTokenCount;
@property (retain, nonatomic) NSNumber *maxStopWordCount;
@property (retain, nonatomic) NSNumber *matchedStopWordCount;
@property (retain, nonatomic) NSNumber *editDistance;
@property (retain, nonatomic) NSNumber *maxAliasCount;
@property (retain, nonatomic) NSNumber *matchedAliasCount;
@property (retain, nonatomic) NSMutableArray *matchedAliasTypes;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMatchSignalBitSet:(unsigned int)a0 matchScore:(float)a1 maxTokenCount:(unsigned int)a2 matchedTokenCount:(unsigned int)a3 maxStopWordCount:(unsigned int)a4 matchedStopWordCount:(unsigned int)a5 editDistance:(unsigned int)a6 maxAliasCount:(unsigned int)a7 matchedAliasCount:(unsigned int)a8 matchedAliasTypes:(id)a9;
- (void)addAliasType:(unsigned int)a0;
- (id)initWithMatchSignalBitSet:(unsigned int)a0;

@end
