@class NSString, TSWPChangeSession;

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    TSWPChangeSession *_changeSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)delta;
- (void).cxx_destruct;
- (unsigned long long)targetCharIndex;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 changeSession:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })insertedRange;
- (void)performWithStorage:(id)a0 delta:(long long)a1 actionBuilder:(void *)a2 withFlags:(unsigned int)a3 replaceBlock:(id /* block */)a4;

@end
