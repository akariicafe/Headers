@class NSString;

@interface CCUIStatusUpdate : NSObject

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) unsigned long long type;

+ (id)statusUpdateWithMessage:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)a0 type:(unsigned long long)a1;

@end
