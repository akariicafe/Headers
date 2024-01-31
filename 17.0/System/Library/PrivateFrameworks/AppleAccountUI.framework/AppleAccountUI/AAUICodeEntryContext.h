@class NSString;

@interface AAUICodeEntryContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *promptMessage;
@property (copy, nonatomic) NSString *escapeTitle;
@property (copy, nonatomic) id /* block */ escapeAction;
@property (copy, nonatomic) id /* block */ codeEnteredAction;
@property (copy, nonatomic) id /* block */ cancelEntryAction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
