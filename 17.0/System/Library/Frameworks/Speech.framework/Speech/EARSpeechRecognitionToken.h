@class NSString;

@interface EARSpeechRecognitionToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *tokenName;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) BOOL appendedAutoPunctuation;
@property (readonly, nonatomic) BOOL prependedAutoPunctuation;
@property (readonly, nonatomic) BOOL isModifiedByAutoPunctuation;

- (id)initWithToken:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
