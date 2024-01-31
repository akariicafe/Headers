@class NSString;

@interface _UITextInputSessionActionInformation : NSObject

@property (copy, nonatomic) NSString *sessionActionString;
@property (nonatomic) BOOL sessionHasOnlyPrimaryInput;
@property (nonatomic) BOOL sessionHasDictation;

- (void).cxx_destruct;

@end
