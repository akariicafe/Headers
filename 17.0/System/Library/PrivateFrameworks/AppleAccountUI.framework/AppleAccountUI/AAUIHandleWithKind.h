@class NSString;

@interface AAUIHandleWithKind : NSObject

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) unsigned long long kind;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 kind:(unsigned long long)a1;

@end
