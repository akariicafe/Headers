@class NSString;

@interface SFSecurityRecommendationsCellData : NSObject

@property (copy, nonatomic) NSString *subtitleText;
@property (nonatomic) unsigned long long numberOfWarnings;
@property (nonatomic) long long warningStyle;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLoadingSubtitle;
- (id)initWithSubtitleText:(id)a0 numberOfWarnings:(unsigned long long)a1 warningStyle:(long long)a2;

@end
