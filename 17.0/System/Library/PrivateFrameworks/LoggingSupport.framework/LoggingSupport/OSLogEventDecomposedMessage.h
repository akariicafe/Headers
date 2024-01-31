@class OSLogEventProxy;

@interface OSLogEventDecomposedMessage : NSObject {
    BOOL _hasPopulatedFields;
    BOOL _hdrNeedsFree;
    unsigned short _pubsize;
    unsigned short _privsize;
    unsigned short _placeholderCount;
    unsigned long long _variant;
    const struct os_log_fmt_hdr_s { unsigned char x0; unsigned char x1; unsigned char x2[0]; } *_hdr;
    const void *_pubdata;
    const void *_privdata;
    const char *_fmt;
    unsigned long long _messageState;
    struct os_log_fmt_raw_placeholder { void *x0; struct os_log_fmt_cspec_s { char *x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; int x7; int x8; char *x9; char *x10; char *x11; unsigned long long x12; } x1; union { long long x0; unsigned long long x1; double x2; long double x3; } x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; BOOL x7; } *_rawPlaceholders;
    void *_hdr_buffer;
}

@property (readonly, nonatomic) OSLogEventProxy *proxy;
@property (readonly, nonatomic) unsigned long long sizeOfLong;
@property (readonly) unsigned long long placeholderCount;
@property (readonly, nonatomic) unsigned long long state;

- (void)dealloc;
- (id)argumentAtIndex:(unsigned long long)a0;
- (void)_unmake;
- (id)placeholderAtIndex:(unsigned long long)a0;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (id)initWithEventProxy:(id)a0;
- (void)_populateFields;
- (struct os_log_fmt_raw_placeholder { void *x0; struct os_log_fmt_cspec_s { char *x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; int x7; int x8; char *x9; char *x10; char *x11; unsigned long long x12; } x1; union { long long x0; unsigned long long x1; double x2; long double x3; } x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; BOOL x7; } *)_rawPlaceholderForIndex:(unsigned long long)a0;
- (void)_initializePlaceholders;

@end
