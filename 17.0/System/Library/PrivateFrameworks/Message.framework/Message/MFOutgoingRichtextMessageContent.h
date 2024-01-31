@class NSArray, MFPlainTextDocument;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent

@property (nonatomic) BOOL textPartsAreHTML;
@property (retain, nonatomic) MFPlainTextDocument *plaintextAlternative;
@property (retain, nonatomic) NSArray *mixedContent;

- (id)copy;
- (void).cxx_destruct;
- (id)richtextContent;

@end
