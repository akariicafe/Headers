@class NSString;

@interface ICTK2TextLayoutManagerDelegate : NSObject <NSTextLayoutManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textLayoutManager:(id)a0 textLayoutFragmentForLocation:(id)a1 inTextElement:(id)a2;

@end
