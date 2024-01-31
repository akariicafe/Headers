@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long positionOffset;
@property (nonatomic) BOOL didBeginOutput;

+ (id)outputWithKeyboardOutput:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInsertionTextAfterSelection:(id)a0;
- (void)setAcceptedCandidate:(id)a0;
- (void)setForwardDeletionCount:(unsigned long long)a0;
- (void)setHandwritingStrokesToDelete:(id)a0;
- (void)setShortcutConversion:(id)a0;
- (void)setTextToCommit:(id)a0;

@end
