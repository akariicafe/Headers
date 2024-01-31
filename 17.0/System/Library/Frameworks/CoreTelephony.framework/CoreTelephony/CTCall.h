@class NSString;

@interface CTCall : NSObject

@property (copy, nonatomic) NSString *callState;
@property (copy, nonatomic) NSString *callID;

+ (id)callForCTCallRef:(struct __CTCall { } *)a0;
+ (id)callForCXCall:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
