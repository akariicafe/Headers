@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate {
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    BOOL _isAutocorrection;
    BOOL _OTAWordListCandidate;
    BOOL _regionalCandidate;
    BOOL _responseKitCandidate;
    BOOL _bilingualCandidate;
    BOOL _asIsCandidate;
    BOOL _partialCandidate;
    BOOL _wubixingConvertedByPinyin;
    BOOL _prefixMatched;
    unsigned int _sourceMask;
    NSString *_candidate;
    NSString *_input;
    NSString *_rawInput;
    unsigned long long _deleteCount;
    long long _cursorMovement;
    NSString *_responseKitCategory;
}

@property (retain, nonatomic) NSNumber *mecabraCandidatePointerValue;
@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;
@property (nonatomic, getter=shouldAccept) BOOL shouldAccept;
@property (readonly, nonatomic) unsigned short flags;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)input;
- (id)candidate;
- (unsigned long long)deleteCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)candidateByReplacingWithCandidate:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (long long)cursorMovement;
- (BOOL)isAutocorrection;
- (BOOL)isEmojiCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (BOOL)isFullwidthCandidate;
- (BOOL)isOTAWordListCandidate;
- (BOOL)isRegionalCandidate;
- (BOOL)isResponseKitCandidate;
- (id)rawInput;
- (id)responseKitCategory;
- (BOOL)isPrefixMatched;
- (BOOL)isAsIsCandidate;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1 rawInput:(id)a2;
- (id)candidateByReplacingWithSourceMask:(unsigned int)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(unsigned short)a3;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(unsigned short)a3 deleteCount:(unsigned long long)a4 cursorMovement:(long long)a5;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithResponseKitString:(id)a0 responseKitCategory:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (id)initWithSurface:(id)a0 input:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (BOOL)isBilingualCandidate;
- (BOOL)isMecabraCandidate;
- (BOOL)isPartialCandidate;
- (BOOL)isWubixingConvertedByPinyin;
- (void)setSourceMask:(unsigned int)a0;
- (unsigned int)sourceMask;

@end
