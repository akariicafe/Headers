@class TRIFactor, TRILevel;

@interface TRIFactorLevel : TRIPBMessage

@property (retain, nonatomic) TRIFactor *factor;
@property (nonatomic) BOOL hasFactor;
@property (retain, nonatomic) TRILevel *level;
@property (nonatomic) BOOL hasLevel;

+ (id)descriptor;
+ (id)hashForFactorLevels:(id)a0;

- (id)uniqueDataRepresentation;

@end
