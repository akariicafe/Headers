@class NSString;

@interface IEValidationResult : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *filename;
@property (nonatomic) int lineNumber;
@property (readonly) unsigned long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
