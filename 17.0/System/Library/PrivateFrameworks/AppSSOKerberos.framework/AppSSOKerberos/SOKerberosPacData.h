@class NSString, NSDate;

@interface SOKerberosPacData : NSObject

@property (retain) NSDate *passwordLastSet;
@property (retain) NSDate *passwordCanChange;
@property (retain) NSDate *passwordMustChange;
@property BOOL passwordNeverExpires;
@property (retain) NSString *homeDirectory;
@property (retain) NSString *effectiveName;
@property (retain) NSString *fullName;

- (id)description;
- (void).cxx_destruct;
- (id)convertFromFileTime:(unsigned long long)a0;
- (id)initWithValidationInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x6; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x7; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x8; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x9; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x10; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x11; unsigned short x12; unsigned short x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct *x18; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x19; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short *x6; } x20; unsigned int x21; struct { unsigned char x0; unsigned char x1; unsigned char x2[6]; unsigned int x3[16]; } x22; } *)a0;

@end
