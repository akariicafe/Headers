@class NSString;

@interface SBFBuildVersion : NSObject

@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) long long majorBuildNumber;
@property (readonly, copy, nonatomic) NSString *majorBuildLetterString;
@property (readonly, nonatomic) long long minorBuildNumber;
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)compareBuildVersion:(id)a0 withPrecision:(long long)a1;
- (long long)compareBuildVersionString:(id)a0 withPrecision:(long long)a1;

@end
