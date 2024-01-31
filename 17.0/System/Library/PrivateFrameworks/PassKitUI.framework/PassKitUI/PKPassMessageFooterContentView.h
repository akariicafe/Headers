@class PKDashboardMessagesView;

@interface PKPassMessageFooterContentView : PKPassFooterContentView {
    PKDashboardMessagesView *_messagesView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithPass:(id)a0;
- (void)updateWithMessages:(id)a0;

@end
