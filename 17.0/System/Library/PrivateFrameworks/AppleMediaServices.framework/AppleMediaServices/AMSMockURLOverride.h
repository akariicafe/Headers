@class AMSMockURLResponse, NSMutableArray, AMSObservable;

@interface AMSMockURLOverride : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *comparators;
@property (retain, nonatomic) AMSObservable *executedObservable;
@property (retain, nonatomic) AMSMockURLResponse *response;

+ (id)overrideWithHost:(id)a0 usingResponse:(id)a1;
+ (id)overrideWithPathComponent:(id)a0 usingResponse:(id)a1;
+ (id)overrideWithURLRegex:(id)a0 usingResponse:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_withURLMatchingHost:(id)a0 containingPath:(id)a1 queryItems:(id)a2;
- (BOOL)shouldOverrideURLRequest:(id)a0;
- (void)withHTTPBodyValidation:(id /* block */)a0 encoding:(long long)a1;
- (void)withResponse:(id)a0;
- (void)withURLContainingPath:(id)a0;
- (void)withURLMatchingHost:(id)a0;
- (void)withURLQueryItems:(id)a0;
- (void)withURLRegexValidation:(id)a0;

@end
