@class NSString;

@interface TRIPBStringValue : TRIPBMessage

@property (copy, nonatomic) NSString *value;

+ (id)descriptor;

@end
