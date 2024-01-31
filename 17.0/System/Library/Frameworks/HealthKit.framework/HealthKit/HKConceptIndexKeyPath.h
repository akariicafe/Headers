@class NSString;

@interface HKConceptIndexKeyPath : NSObject

@property (readonly, copy, nonatomic) NSString *fullKeyPath;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)conceptIndexKeyPathWithFullKeyPath:(id)a0 error:(id *)a1;

- (id)tail;
- (id)head;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFullKeyPath:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
