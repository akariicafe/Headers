@class TPSectionTemplatePage;

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator

@property (retain, nonatomic) TPSectionTemplatePage *pageMaster;
@property (nonatomic) long long fragmentIndex;
@property (nonatomic) long long headerFooterType;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithPageMaster:(id)a0;
- (void)p_incrementFragmentIndex;
- (void)p_incrementHeaderFooterType;

@end
