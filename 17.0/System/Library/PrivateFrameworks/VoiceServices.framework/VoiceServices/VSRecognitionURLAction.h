@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL *_url;
}

- (void)dealloc;
- (id)perform;
- (id)URL;
- (void)setURL:(id)a0;
- (int)completionType;

@end
