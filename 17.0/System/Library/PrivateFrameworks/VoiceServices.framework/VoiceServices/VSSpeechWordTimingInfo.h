@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;

+ (id)wordTimingInfoFrom:(id)a0 timestamps:(id)a1;
+ (unsigned long long)extraBytesFromUTF8ToUTF16With:(const char *)a0 totalLength:(unsigned long long)a1 begin:(unsigned long long)a2 end:(unsigned long long)a3;
+ (id)utf16TimingInfoWithUTF8Range:(id)a0 withText:(id)a1;
+ (void)adjustWordTimingInfo:(id)a0 forContext:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
