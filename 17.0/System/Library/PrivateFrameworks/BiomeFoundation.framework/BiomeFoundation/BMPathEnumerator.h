@class NSString;

@interface BMPathEnumerator : NSObject {
    NSString *_path;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (id)initWithPath:(id)a0;
- (id)peekPath;
- (void).cxx_destruct;
- (id)navigateDown;
- (id)navigateUp;

@end
