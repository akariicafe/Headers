@class NSRegularExpression, NSString;

@interface _ECSubjectFormatterContext : NSObject

@property (readonly, nonatomic) NSRegularExpression *regex;
@property (readonly, copy, nonatomic) NSString *localizedPrefix;
@property (readonly, nonatomic) BOOL prefixLastStrongDirectionalityIsLeftToRight;

- (void).cxx_destruct;
- (id)initWithRegex:(id)a0 localizedPrefix:(id)a1;

@end
