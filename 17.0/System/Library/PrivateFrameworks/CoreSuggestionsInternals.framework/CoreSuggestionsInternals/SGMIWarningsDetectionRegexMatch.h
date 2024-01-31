@class NSString, NSArray;

@interface SGMIWarningsDetectionRegexMatch : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } coreRange;
@property (readonly, nonatomic) NSString *signature;
@property (readonly, nonatomic) NSArray *wildcardsMatches;

- (unsigned long long)location;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 coreRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 signature:(id)a2 wildcardsMatches:(id)a3;

@end
