@class NSString, PKApplyFooterContent;
@protocol PKApplyInlineFooterSectionControllerDelegate, NSCopying;

@interface PKApplySavingsInlineTermsRow : NSObject <PKApplyCollectionViewRow> {
    PKApplyFooterContent *_content;
    id<PKApplyInlineFooterSectionControllerDelegate> _delegate;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (void)configureCell:(id)a0;
- (void)didTapFooterLink:(id)a0;
- (id)initWithContent:(id)a0 delegate:(id)a1;

@end
