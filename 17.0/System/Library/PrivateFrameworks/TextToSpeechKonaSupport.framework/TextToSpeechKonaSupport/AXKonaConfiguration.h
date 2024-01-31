@class NSString;

@interface AXKonaConfiguration : NSObject

@property (readonly, nonatomic) NSString *dylib;
@property (readonly, nonatomic) NSString *dialectCode;
@property (readonly, nonatomic) NSString *iniString;
@property (readonly, nonatomic) int eciDialect;

- (void).cxx_destruct;
- (id)initWithDylib:(id)a0 dialectCode:(id)a1 dialect:(int)a2;

@end
