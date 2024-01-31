@interface SCRO2DPin : NSObject

@property (readonly) unsigned long long x;
@property (readonly) unsigned long long y;
@property union { unsigned long long detent; float height; } state;
@property (readonly) unsigned long long style;

- (id)initWithX:(unsigned long long)a0 y:(unsigned long long)a1 style:(unsigned long long)a2;

@end
