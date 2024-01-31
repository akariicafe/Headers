@class NSString;

@interface SXPresentableMail : NSObject

@property (readonly, nonatomic) NSString *recipient;
@property (readonly, nonatomic) NSString *subject;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)a0 subject:(id)a1;

@end
