@interface _LSBundleProxiesOfTypeQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;
+ (id)queryWithType:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (BOOL)bundleUnitMeetsRequirements:(unsigned int)a0 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } x6; unsigned int x7; int x8; unsigned int x9; struct LSVersionNumber { unsigned char x0[32]; } x10; struct LSVersionNumber { unsigned char x0[32]; } x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned int x27; unsigned int x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned long long x34; unsigned long long x35; unsigned int x36; unsigned int x37; unsigned long long x38; unsigned int x39; unsigned long long x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned int x57; unsigned char x58; unsigned char x59; unsigned char x60; unsigned int x61; unsigned int x62[1]; unsigned int x63; unsigned int x64; struct LSAppClipFields { unsigned int x0; } x65; int x66; unsigned int x67; unsigned int x68; unsigned int x69; unsigned int x70; unsigned int x71; unsigned int x72; } *)a1 context:(struct LSContext { id x0; } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
