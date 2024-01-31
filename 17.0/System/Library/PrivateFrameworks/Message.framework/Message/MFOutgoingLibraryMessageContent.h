@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (id)copy;
- (void).cxx_destruct;
- (id)headers;
- (id)libraryContent;

@end
