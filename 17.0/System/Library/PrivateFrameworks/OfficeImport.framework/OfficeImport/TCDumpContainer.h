@class NSString, TCDumpType;

@interface TCDumpContainer : TCDumpType {
    int mByteSize;
    int mByteSizeFieldType;
    NSString *mByteSizeFieldName;
    int mByteSizeCorrection;
    TCDumpType *mElementType;
}

- (void).cxx_destruct;
- (void)fromBinary:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 toXml:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 state:(id)a2;
- (id)initWithByteSize:(int)a0 byteSizeFieldType:(int)a1 byteSizeFieldName:(id)a2 byteSizeCorrection:(int)a3 elementType:(id)a4;
- (id)initWithByteSize:(int)a0 elementType:(id)a1;
- (id)initWithByteSizeFieldName:(id)a0 byteSizeCorrection:(int)a1 elementType:(id)a2;
- (id)initWithByteSizeFieldName:(id)a0 elementType:(id)a1;
- (id)initWithByteSizeFieldType:(int)a0 byteSizeCorrection:(int)a1 elementType:(id)a2;
- (id)initWithByteSizeFieldType:(int)a0 elementType:(id)a1;

@end
