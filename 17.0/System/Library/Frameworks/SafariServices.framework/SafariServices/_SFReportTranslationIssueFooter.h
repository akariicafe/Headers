@class NSString, UITextView;
@protocol _SFReportTranslationIssueFooterDelegate;

@interface _SFReportTranslationIssueFooter : UICollectionReusableView <UITextViewDelegate> {
    UITextView *_textView;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (weak, nonatomic) id<_SFReportTranslationIssueFooterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
