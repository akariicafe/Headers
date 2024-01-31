@class NSString;

@interface APMutableLogConfig : APLogConfig <NSCopying>

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;

@end
