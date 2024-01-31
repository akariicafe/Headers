@class NSString;

@interface VCCaptionsTranscriptionSegment : NSObject <NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscriptionSegment>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int confidence;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfidence:(unsigned int)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
