@class NSString, NSDictionary, IMChat, IMTapback, NSAttributedString;

@interface IMTapbackSender : NSObject

@property (readonly, nonatomic) IMTapback *tapback;
@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) NSAttributedString *messageContent;
@property (readonly, nonatomic) NSString *backwardCompatibilityString;
@property (readonly, nonatomic) NSAttributedString *attributedContentString;
@property (readonly, nonatomic) IMChat *chat;

- (void)send;
- (void).cxx_destruct;
- (id)initWithTapback:(id)a0 chat:(id)a1 messageGUID:(id)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 messageSummaryInfo:(id)a4 threadIdentifier:(id)a5;
- (id)initWithTapback:(id)a0 chat:(id)a1 messagePartChatItem:(id)a2;

@end
