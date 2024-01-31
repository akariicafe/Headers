@class NSString;

@interface BRLTBrailleChar : NSObject <NSCopying> {
    unsigned char _bits;
}

@property BOOL dot1;
@property BOOL dot2;
@property BOOL dot3;
@property BOOL dot4;
@property BOOL dot5;
@property BOOL dot6;
@property BOOL dot7;
@property BOOL dot8;
@property (readonly) NSString *unicode;
@property (readonly) unsigned char bits;

+ (id)charWithBits:(unsigned char)a0;
+ (id)charWithBrf:(id)a0;
+ (id)charWithUnichar:(unsigned short)a0;
+ (id)charWithUnicode:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_dotUp:(int)a0;
- (void)_setDot:(int)a0 up:(BOOL)a1;
- (id)initWithBits:(unsigned char)a0;
- (id)initWithBrf:(id)a0;
- (id)initWithUnichar:(unsigned short)a0;
- (id)initWithUnicode:(id)a0;
- (BOOL)isEqualToBrailleChar:(id)a0;

@end
