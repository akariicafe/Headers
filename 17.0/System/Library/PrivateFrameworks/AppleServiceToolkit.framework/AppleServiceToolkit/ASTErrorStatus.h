@class NSNumber, NSString, NSMutableDictionary;

@interface ASTErrorStatus : NSObject

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSMutableDictionary *data;

+ (id)errorStatusWithCode:(long long)a0;

- (id)init;
- (id)dictionary;
- (void).cxx_destruct;
- (id)reasonForCode:(id)a0;

@end
