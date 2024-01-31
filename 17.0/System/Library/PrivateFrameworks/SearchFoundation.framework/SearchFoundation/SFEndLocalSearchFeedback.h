@class SFQueryUnderstandingParse;

@interface SFEndLocalSearchFeedback : SFEndSearchFeedback

@property (retain, nonatomic) SFQueryUnderstandingParse *quParse;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartSearch:(id)a0 queryUnderstandingParse:(id)a1;
- (id)initWithCoder:(id)a0;

@end
