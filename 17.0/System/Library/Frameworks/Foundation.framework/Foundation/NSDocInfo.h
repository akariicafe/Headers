@interface NSDocInfo : NSObject <NSCopying> {
    long long time;
    unsigned short mode;
    struct { unsigned char isDir : 1; unsigned char isSingleFile : 1; unsigned char isSoftLink : 1; unsigned short _pad : 13; } flags;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromInfo:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a0;
- (id)initWithFileAttributes:(id)a0;
- (void)setFileAttributes:(id)a0;

@end
