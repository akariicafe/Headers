@class NSString;

@interface _DPBSFPWithOHEResult : NSObject

@property (readonly, copy, nonatomic) NSString *privatizedString;
@property (readonly, nonatomic) unsigned long long segmentIndex;
@property (readonly, nonatomic) BOOL verificationMode;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBitString:(id)a0 segmentIndex:(unsigned long long)a1 verificationMode:(BOOL)a2;

@end
