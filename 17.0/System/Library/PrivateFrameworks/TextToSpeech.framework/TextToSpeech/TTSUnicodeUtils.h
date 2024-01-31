@interface TTSUnicodeUtils : NSObject

+ (unsigned char)codePointToUtf8ByteSize:(unsigned int)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })utf16RangeFromUTF8Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 chars:(const char *)a1 size:(unsigned long long)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })utf8RangeFromUTF16Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 chars:(const unsigned short *)a1 size:(unsigned long long)a2;

@end
