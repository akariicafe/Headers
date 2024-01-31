@class AFUserUtterance, AceObject;

@interface SRUIFSpeechRecognitionHypothesis : NSObject <NSCopying>

@property (readonly, nonatomic) AFUserUtterance *userUtterance;
@property (readonly, nonatomic, getter=isFinal) BOOL final;
@property (readonly, nonatomic) AceObject *backingAceObject;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserUtterance:(id)a0 backingAceObject:(id)a1 isFinal:(BOOL)a2;

@end
