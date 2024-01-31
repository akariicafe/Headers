@class NSString, EKEventDetailCommentCell;

@interface EKEventCommentDetailItem : EKEventDetailItem <UITextFieldDelegate> {
    EKEventDetailCommentCell *_cell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)reset;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;

@end
