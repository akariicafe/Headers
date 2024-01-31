@class NSString, NSTimer;

@interface _TVRXSearchReference : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id completionBlock;
@property (weak, nonatomic) NSTimer *expirationTimer;

- (void).cxx_destruct;

@end
