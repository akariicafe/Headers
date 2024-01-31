@interface MessageAttachmentActionGenerator : NSObject

+ (id)_saveToCameraRollActionForFutureRepresentations:(id)a0 title:(id)a1 image:(id)a2;
+ (id)markupDocumentActionForURL:(id)a0 messageObjectID:(id)a1 mailboxObjectID:(id)a2 subject:(id)a3 senderDisplayName:(id)a4 shouldShowReplyAll:(BOOL)a5 originView:(id)a6 useFullScreenPresentation:(BOOL)a7 contentRepresentationHandlingDelegate:(id)a8 assetViewerManager:(id)a9;
+ (id)quicklookActionForAttachmentContext:(id)a0 alternateAction:(id)a1 originView:(id)a2 attachmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 useFullScreenPresentation:(BOOL)a4;
+ (id)quicklookActionForURL:(id)a0 messageObjectID:(id)a1 mailboxObjectID:(id)a2 subject:(id)a3 senderDisplayName:(id)a4 shouldShowReplyAll:(BOOL)a5 originView:(id)a6 attachmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 useFullScreenPresentation:(BOOL)a8 contentRepresentationHandlingDelegate:(id)a9 assetViewerManager:(id)a10;
+ (id)saveAllAttachmentsActionWithTitle:(id)a0 futureRepresentations:(id)a1;
+ (id)saveImageActionForFutureRepresentation:(id)a0;
+ (id)saveVideoActionForFutureRepresentation:(id)a0;

@end
