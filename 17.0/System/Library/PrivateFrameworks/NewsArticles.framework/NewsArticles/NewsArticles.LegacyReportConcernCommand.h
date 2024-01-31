@interface NewsArticles.LegacyReportConcernCommand : FCCommand {
    void /* unknown type, empty encoding */ concern;
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ comments;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;

@end
