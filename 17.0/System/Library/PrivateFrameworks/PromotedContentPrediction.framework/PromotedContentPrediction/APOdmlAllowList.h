@class NSSet;

@interface APOdmlAllowList : APOdmlSingleton

@property (retain, nonatomic) NSSet *allowList;

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)count;
- (BOOL)isAllowed:(id)a0;
- (void)reinitializeAllowList;
- (void).cxx_destruct;

@end
