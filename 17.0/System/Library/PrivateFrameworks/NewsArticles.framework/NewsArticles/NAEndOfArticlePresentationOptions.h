@interface NAEndOfArticlePresentationOptions : NSObject {
    void /* unknown type, empty encoding */ suppressMoreFromSection;
    void /* unknown type, empty encoding */ suppressMoreToReadSection;
    void /* unknown type, empty encoding */ suppressMoreFromIssueSection;
    void /* unknown type, empty encoding */ suppressRelatedSection;
    void /* unknown type, empty encoding */ suppressRecommendedReadsSection;
    void /* unknown type, empty encoding */ articleBackgroundColor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSuppressMoreFromSection:(BOOL)a0 suppressMoreToReadSection:(BOOL)a1 suppressMoreFromIssueSection:(BOOL)a2 suppressRelatedSection:(BOOL)a3 suppressRecommendedReadsSection:(long long)a4 articleBackgroundColor:(id)a5;

@end
