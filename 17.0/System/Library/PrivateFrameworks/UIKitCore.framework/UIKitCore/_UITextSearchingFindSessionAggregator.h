@class UITextSearchingFindSession, NSOrderedSet, NSString;

@interface _UITextSearchingFindSessionAggregator : NSObject <UITextSearchAggregator>

@property (getter=isValid) BOOL valid;
@property (readonly, weak, nonatomic) UITextSearchingFindSession *session;
@property (readonly, nonatomic) NSOrderedSet *allFoundRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_performOnMainIfValid:(id /* block */)a0;
- (void)finishedSearching;
- (void)foundRange:(id)a0 forSearchString:(id)a1 inDocument:(id)a2;
- (void)invalidateFoundRange:(id)a0 inDocument:(id)a1;

@end
