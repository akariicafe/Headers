@class NSString, NSMutableArray, NSMutableString;

@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscription> {
    NSMutableString *_formattedText;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isFinal;
@property (readonly, nonatomic) NSString *formattedText;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) NSMutableArray *segments;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addSegment:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSFTranscription:(id)a0 utteranceNumber:(unsigned int)a1 updateNumber:(unsigned int)a2 isLocal:(BOOL)a3 isFinal:(BOOL)a4 streamToken:(long long)a5;
- (id)initWithUtteranceNumber:(unsigned int)a0 updateNumber:(unsigned int)a1 isLocal:(BOOL)a2 isFinal:(BOOL)a3 streamToken:(long long)a4;

@end
