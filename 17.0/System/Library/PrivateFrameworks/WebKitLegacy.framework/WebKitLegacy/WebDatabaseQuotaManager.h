@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (id)initWithOrigin:(id)a0;
- (unsigned long long)usage;
- (void)setQuota:(unsigned long long)a0;
- (id)origin;
- (unsigned long long)quota;

@end
