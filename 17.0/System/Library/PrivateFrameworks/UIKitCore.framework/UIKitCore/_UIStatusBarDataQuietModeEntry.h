@class NSString;

@interface _UIStatusBarDataQuietModeEntry : _UIStatusBarDataBoolImageEntry

@property (copy, nonatomic) NSString *focusName;

+ (BOOL)supportsSecureCoding;
+ (id)entryWithFocusName:(id)a0 imageNamed:(id)a1 boolValue:(BOOL)a2;

- (unsigned long long)hash;
- (id)_ui_descriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initFromData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a0 type:(int)a1 focusName:(const char *)a2 maxFocusLength:(int)a3 imageName:(const char *)a4 maxImageLength:(int)a5 boolValue:(BOOL)a6;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
