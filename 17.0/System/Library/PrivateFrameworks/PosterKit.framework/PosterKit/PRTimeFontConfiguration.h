@class NSString, UIFont;

@interface PRTimeFontConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier;
@property (readonly, nonatomic) double weight;
@property (readonly, copy, nonatomic) UIFont *customFont;
@property (readonly, nonatomic) UIFont *effectiveFont;

- (id)init;
- (unsigned long long)hash;
- (id)effectiveFontForRole:(id)a0;
- (id)initWithCustomFont:(id)a0;
- (id)description;
- (id)effectiveFontForRole:(id)a0 ignoringWeight:(BOOL)a1;
- (double)_defaultWeightForTimeFontIdentifier:(id)a0;
- (id)initWithTimeFontIdentifier:(id)a0 weight:(double)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithTimeFontIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
