@class NSString;

@interface RTContactScore : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long frequencyCount;
@property (nonatomic) double frequencyScore;
@property (nonatomic) double recencyScore;
@property (nonatomic) double significanceScore;
@property (nonatomic) double runningMean;
@property (nonatomic) double runningMeanOfSquares;
@property (readonly, nonatomic) NSString *contactID;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactID:(id)a0 frequencyScore:(double)a1 recencyScore:(double)a2 significanceScore:(double)a3 frequencyCount:(unsigned long long)a4 runningMean:(double)a5 runningMeanOfSquares:(double)a6;
- (void)mergeWithAnotherContactScore:(id)a0;

@end
