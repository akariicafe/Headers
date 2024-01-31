@class NSString, TIDocumentState;

@interface TIKeyboardInteractionProtocolEventContextDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) TIDocumentState *documentState;
@property (readonly, nonatomic) BOOL wordDelete;
@property (readonly, nonatomic) BOOL cursorMoved;
@property (readonly, nonatomic) BOOL extendsPriorWord;
@property (readonly, nonatomic) NSString *word;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inWordRange;
@property (readonly, nonatomic) unsigned long long selectionLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (id)initWithContext:(id)a0 wordDelete:(BOOL)a1 cursorMoved:(BOOL)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;

@end
