@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } *_components;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)queryItems;
- (id)user;
- (void)setPercentEncodedPath:(id)a0;
- (void)setQuery:(id)a0;
- (void)setPercentEncodedFragment:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)percentEncodedQueryItems;
- (id)initWithString:(id)a0 encodingInvalidCharacters:(BOOL)a1;
- (void)dealloc;
- (void)setPassword:(id)a0;
- (void)setPath:(id)a0;
- (id)fragment;
- (void)setUser:(id)a0;
- (void)setScheme:(id)a0;
- (void)setPercentEncodedQueryItems:(id)a0;
- (void)setPercentEncodedPassword:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)password;
- (void)setEncodedHost:(id)a0;
- (id)host;
- (id)URL;
- (void)setFragment:(id)a0;
- (id)query;
- (id)string;
- (id)description;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (id)path;
- (void)setHost:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (id)scheme;
- (void)setPercentEncodedHost:(id)a0;
- (id)percentEncodedPassword;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (id)encodedHost;
- (id)initWithString:(id)a0;
- (void)setPort:(id)a0;
- (BOOL)isEqual:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (id)URLRelativeToURL:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (id)port;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (id)percentEncodedQuery;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)percentEncodedPath;
- (void)setPercentEncodedQuery:(id)a0;
- (id)percentEncodedUser;
- (void)setQueryItems:(id)a0;

@end
