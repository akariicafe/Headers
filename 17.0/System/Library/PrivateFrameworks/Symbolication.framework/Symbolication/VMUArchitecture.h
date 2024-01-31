@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
    int _cpuType;
    int _cpuSubtype;
}

+ (void)initialize;
+ (id)armArchitecture;
+ (id)ppcArchitecture;
+ (id)anyArchitecture;
+ (id)architectureWithCpuType:(int)a0 cpuSubtype:(int)a1;
+ (id)currentArchitecture;
+ (id)i386Architecture;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;

- (int)cpuType;
- (unsigned long long)hash;
- (BOOL)is64Bit;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (int)cpuSubtype;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)is32Bit;
- (id)initWithCpuType:(int)a0 cpuSubtype:(int)a1;
- (BOOL)isBigEndian;
- (BOOL)isEqualToArchitecture:(id)a0;
- (BOOL)isLittleEndian;
- (BOOL)matchesArchitecture:(id)a0;

@end
