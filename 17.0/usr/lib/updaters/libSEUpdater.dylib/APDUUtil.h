@interface APDUUtil : NSObject

+ (id)getAPDUWithCla:(unsigned char)a0 ins:(unsigned char)a1 p1:(unsigned char)a2 p2:(unsigned char)a3 payload:(id)a4;
+ (struct CApdu { void /* function */ **x0; struct shared_ptr<std::vector<unsigned char>> { void *x0; struct __shared_weak_count *x1; } x1; struct *x2; char *x3; unsigned long long x4; unsigned long long x5; })getCXXApduWithCla:(unsigned char)a0 ins:(unsigned char)a1 p1:(unsigned char)a2 p2:(unsigned char)a3 payload:(id)a4;

@end
