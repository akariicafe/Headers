@class NWURLError;

@interface NWURLErrorUserInfoDictionary : NSDictionary

@property (retain, nonatomic) NWURLError *error;

- (id)initWithError:(id)a0;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
