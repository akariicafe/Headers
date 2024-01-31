@class NSArray, NSIndexPath;

@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *multilingualAlternatives;
@property (nonatomic) BOOL fromKeyboard;
@property (nonatomic) BOOL showMultilingualAlternatives;
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection;
@property (nonatomic) struct __CFString { } *transform;
@property (nonatomic) BOOL useServerCapitalization;
@property (nonatomic) BOOL addTrailingSpace;
@property (retain, nonatomic) NSIndexPath *indexPathOfInterpretations;
@property (readonly, nonatomic) BOOL allowsAlternatives;
@property (nonatomic) BOOL isFinalResult;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)text;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bestResults;
- (id)bestText;
- (id)bestTextArray;
- (id)bestTextArrayForAlternatives:(id)a0;
- (id)bestTextForMultilingualAlternatives;
- (id)dictationPhraseArray;
- (id)initWithArrayOfArrayOfStrings:(id)a0;
- (id)initWithDetectedPhrases:(id)a0 multilingualAlternatives:(id)a1;
- (id)initWithPhrases:(id)a0;
- (id)multilingualResultsByLanguageCode;
- (id)secondBestText;
- (id)secondBestTextArray;
- (id)singleLineResult;
- (id)textArray;
- (id)textArrayForAlternatives:(id)a0;

@end
