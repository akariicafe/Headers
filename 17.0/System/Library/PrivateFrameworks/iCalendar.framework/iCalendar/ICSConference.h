@class NSString;

@interface ICSConference : ICSProperty

@property (retain, nonatomic) NSString *feature;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *region;

- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (unsigned long long)currentHash;
- (BOOL)isEqualToConference:(id)a0;

@end
