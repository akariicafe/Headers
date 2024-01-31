@class SFButtonItem, SFSearchResult, SFCommand, SFCardSection, SFResultSection;

@interface SFCommandEngagementFeedback : SFFeedback

@property (retain, nonatomic) SFSearchResult *result;
@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) SFButtonItem *button;
@property (retain, nonatomic) SFResultSection *resultSection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCommand:(id)a0 cardSection:(id)a1;
- (id)initWithCommand:(id)a0 cardSection:(id)a1 result:(id)a2 button:(id)a3;

@end
