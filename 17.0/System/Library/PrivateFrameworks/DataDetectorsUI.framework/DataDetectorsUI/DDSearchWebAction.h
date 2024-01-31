@class NSString;

@interface DDSearchWebAction : DDOpenURLAction {
    NSString *_query;
}

- (id)iconName;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)canBePerformedByOpeningURL;
- (id)initWithQueryString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (void)performFromView:(id)a0;

@end
