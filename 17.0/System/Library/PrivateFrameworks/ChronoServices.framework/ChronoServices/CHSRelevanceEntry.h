@class NSDate;

@interface CHSRelevanceEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL hasRelevance;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double duration;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 score:(double)a1 duration:(double)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
