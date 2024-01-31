@class NSData;

@interface IDSGlobalLinkMessage : NSObject {
    struct IDSGlobalLinkAttribute { unsigned short type; unsigned short len; union { struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } ss; unsigned short u16; unsigned int u32; unsigned long long u64; struct IDSGLAttrBinaryData_ { int len; unsigned char data[1024]; } binaryData; } value; } _attributes[20];
    int _numAttribute;
}

@property (readonly, nonatomic) long long command;
@property (readonly) NSData *hmacKeyData;

+ (id)messageWithBuffer:(char *)a0 length:(int)a1;
+ (id)messageWithCommand:(long long)a0 attributes:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCommand:(long long)a0;
- (void)setAttributes:(id)a0;
- (void)_addAddressAttribute:(long long)a0 value:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;
- (BOOL)_addAttribute:(struct IDSGlobalLinkAttribute { unsigned short x0; unsigned short x1; union { struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x0; unsigned short x1; unsigned int x2; unsigned long long x3; struct IDSGLAttrBinaryData_ { int x0; unsigned char x1[1024]; } x4; } x2; } *)a0;
- (void)_addBinaryDataAttribute:(long long)a0 value:(id)a1;
- (void)_addUInt16Attribute:(long long)a0 value:(unsigned short)a1;
- (void)_addUInt32Attribute:(long long)a0 value:(unsigned int)a1;
- (void)_addUInt64Attribute:(long long)a0 value:(unsigned long long)a1;
- (BOOL)_write:(char *)a0 outputLength:(int *)a1 dropLowerPriorityFields:(BOOL)a2;
- (BOOL)getAttribute:(long long)a0 attribute:(struct IDSGlobalLinkAttribute { unsigned short x0; unsigned short x1; union { struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x0; unsigned short x1; unsigned int x2; unsigned long long x3; struct IDSGLAttrBinaryData_ { int x0; unsigned char x1[1024]; } x4; } x2; } *)a1;
- (BOOL)read:(char *)a0 inputLength:(int)a1;
- (BOOL)verifyHMacDigestWithKey:(id)a0 inputBuffer:(char *)a1 inputLength:(int)a2;
- (BOOL)write:(char *)a0 outputLength:(int *)a1;

@end
