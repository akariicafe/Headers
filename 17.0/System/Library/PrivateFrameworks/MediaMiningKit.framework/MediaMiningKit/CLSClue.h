@class NSString, NSDictionary, CLSProfile, CLSInformant;

@interface CLSClue : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property double confidence;
@property double relevance;
@property (retain) CLSInformant *informant;
@property (retain) CLSProfile *profile;
@property (retain) NSString *informantIdentifier;
@property (retain) NSString *profileIdentifier;
@property BOOL transient;
@property unsigned long long versionCount;
@property (retain) NSDictionary *extraParameters;

+ (id)_clueWithValue:(id)a0 forKey:(id)a1;
+ (id)_clueWithValue:(id)a0 forKey:(id)a1 confidence:(double)a2 relevance:(double)a3;

- (id)stringValue;
- (long long)integerValue;
- (id)init;
- (unsigned long long)hash;
- (double)score;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)enumValue;
- (unsigned long long)valueHash;
- (void)_incrementVersionCount;
- (long long)compareScore:(id)a0;
- (BOOL)isEqualToClue:(id)a0;

@end
