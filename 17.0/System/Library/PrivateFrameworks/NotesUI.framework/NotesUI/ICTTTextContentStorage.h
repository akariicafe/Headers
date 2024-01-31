@class ICOutlineController, ICTTTextStorage;

@interface ICTTTextContentStorage : NSTextContentStorage

@property (retain, nonatomic) ICOutlineController *outlineController;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;

- (id)init;
- (id)initWithTextStorage:(id)a0;
- (void)removeTextLayoutManager:(id)a0;
- (void).cxx_destruct;
- (void)addTextLayoutManager:(id)a0;
- (void)setExpanded:(BOOL)a0 forSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isUUIDCollapsed:(id)a0;
- (id)paragraphUUIDsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
