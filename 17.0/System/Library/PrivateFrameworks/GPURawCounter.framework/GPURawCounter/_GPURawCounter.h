@class NSString;

@interface _GPURawCounter : NSObject <GPURawCounter>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long counterValueType;

- (void)dealloc;
- (id)initWithName:(id)a0 description:(id)a1 valueType:(unsigned long long)a2;

@end
