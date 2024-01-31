@class NSString, NSDictionary, SVXSpeechSynthesisAudio;

@interface SVXSpeechSynthesisRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *speakableText;
@property (readonly, copy, nonatomic) NSDictionary *speakableContext;
@property (readonly, copy, nonatomic) NSString *localizationKey;
@property (readonly, copy, nonatomic) SVXSpeechSynthesisAudio *presynthesizedAudio;
@property (readonly, copy, nonatomic) NSString *streamID;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPriority:(long long)a0 options:(unsigned long long)a1 speakableText:(id)a2 speakableContext:(id)a3 localizationKey:(id)a4 presynthesizedAudio:(id)a5 streamID:(id)a6;

@end
