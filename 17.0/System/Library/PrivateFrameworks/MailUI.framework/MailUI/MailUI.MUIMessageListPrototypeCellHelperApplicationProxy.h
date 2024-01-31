@class MUIAddressListFormatter;

@interface MailUI.MUIMessageListPrototypeCellHelperApplicationProxy : NSObject <MessageListCellHelperApplicationProxy>

@property (nonatomic, readonly) MUIAddressListFormatter *addressListFormatter;
@property (nonatomic, readonly) BOOL showToCCIndicators;

- (id)init;
- (BOOL)isMessageListCellObject:(id)a0;

@end
