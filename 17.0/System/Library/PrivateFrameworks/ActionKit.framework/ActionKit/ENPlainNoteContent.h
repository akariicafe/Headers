@class NSArray;

@interface ENPlainNoteContent : ENNoteContent

@property (copy, nonatomic) NSArray *contents;

- (void).cxx_destruct;
- (id)initWithContents:(id)a0;
- (id)initWithString:(id)a0;
- (id)enmlWithNote:(id)a0;

@end
