@class NSURL;

@interface BREvictItemOperation : BROperation {
    struct { unsigned long long sectionID; char *function; int line; } _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
