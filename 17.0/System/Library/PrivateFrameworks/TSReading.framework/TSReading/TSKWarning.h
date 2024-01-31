@class NSString, NSArray;

@interface TSKWarning : NSObject

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *infos;
@property (readonly, nonatomic) unsigned int kind;
@property (readonly, nonatomic) int severity;

+ (id)warningWithMessage:(id)a0;
+ (id)warningWithMessage:(id)a0 kind:(unsigned int)a1 infos:(id)a2;
+ (id)warningWithMessage:(id)a0 kind:(unsigned int)a1 severity:(int)a2 infos:(id)a3;
+ (id)warningWithMessage:(id)a0 severity:(int)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessage:(id)a0 kind:(unsigned int)a1 severity:(int)a2 infos:(id)a3;

@end
