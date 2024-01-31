@class NSString;

@interface TMLParserToken : NSObject

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSString *text;

- (id)description;
- (void).cxx_destruct;
- (id)initWithToken:(unsigned long long)a0 text:(id)a1;

@end
