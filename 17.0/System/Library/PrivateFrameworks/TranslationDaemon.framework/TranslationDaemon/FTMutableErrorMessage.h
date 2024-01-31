@class NSString;

@interface FTMutableErrorMessage : FTErrorMessage

@property (nonatomic) unsigned int error_code;
@property (copy, nonatomic) NSString *reason;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
