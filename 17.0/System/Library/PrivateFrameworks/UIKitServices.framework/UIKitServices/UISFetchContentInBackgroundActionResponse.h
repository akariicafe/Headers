@interface UISFetchContentInBackgroundActionResponse : BSActionResponse

+ (id)responseWithResult:(unsigned long long)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (unsigned long long)result;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)initWithBackgroundFetchResult:(unsigned long long)a0;

@end
