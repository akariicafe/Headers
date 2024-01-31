@interface CryptexRemoteDeviceIdentifier : NSObject

@property (readonly, nonatomic) struct _img4_chip_instance { unsigned short x0; struct _img4_chip *x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned int x15; BOOL x16; struct _img4_dgst { unsigned short x0; unsigned long long x1; unsigned char x2[48]; } x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; } *inst;

- (void)dealloc;
- (id)initWithChipInstance:(const struct _img4_chip_instance { unsigned short x0; struct _img4_chip *x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned int x15; BOOL x16; struct _img4_dgst { unsigned short x0; unsigned long long x1; unsigned char x2[48]; } x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; } *)a0;

@end
