@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (void)dealloc;
- (id)copy;
- (id)headers;
- (id)libraryContent;

@end
