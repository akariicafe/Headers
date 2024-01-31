@class NSRegularExpression, NSString;

@interface CDMRegexEntry : NSObject

@property (readonly, nonatomic) NSRegularExpression *regularExpression;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithRegex:(id)a0 label:(id)a1;

@end
