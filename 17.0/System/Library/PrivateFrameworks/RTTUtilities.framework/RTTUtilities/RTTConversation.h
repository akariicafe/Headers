@class NSString, NSMutableArray, TUCall;

@interface RTTConversation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *callIdentifier;
@property (retain, nonatomic) NSMutableArray *utterances;
@property (retain, nonatomic) TUCall *call;

+ (id)conversationWithCall:(id)a0;
+ (void)conversationWithCall:(id)a0 withCallback:(id /* block */)a1;
+ (void)conversationWithCallUID:(id)a0 withCallback:(id /* block */)a1;
+ (id)conversationWithID:(id)a0 andUtterances:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)cleanup;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToConversation:(id)a0;
- (id)appendCharacter:(unsigned short)a0;
- (id)addTranscriptionFromOtherContactPath:(id)a0;
- (void)addUtterance:(id)a0;
- (id)appendStringFromOtherContactPath:(id)a0;
- (id)lastUtteranceForMe:(BOOL)a0;
- (id)lastUtteranceForMe:(BOOL)a0 isTranscription:(BOOL)a1;
- (unsigned long long)lastUtteranceIndexForMe:(BOOL)a0 isTranscription:(BOOL)a1;
- (id)mergeUtterancesIfPossible;
- (id)otherContactPath;
- (id)processBackspaceForMe:(BOOL)a0;
- (id)updateTranscriptionFromOtherContactPath:(id)a0;
- (unsigned long long)utteranceCountForMe:(BOOL)a0;

@end
