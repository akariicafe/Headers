@class NSString, NSDate;

@interface POWSTrustTimestampType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *Id;
@property (retain, nonatomic) NSDate *Created;
@property (retain, nonatomic) NSDate *Expires;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
