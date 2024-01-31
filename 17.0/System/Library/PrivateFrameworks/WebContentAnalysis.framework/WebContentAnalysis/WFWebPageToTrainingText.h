@class NSString;

@interface WFWebPageToTrainingText : WFWebPageDecorator {
    NSString *categorySignature;
}

+ (id)documentSignature;
+ (id)signatureForCategory:(unsigned long long)a0;

- (void)dealloc;
- (id)categorySignature;
- (id)rawPlainText;
- (void)setCategorySignature:(id)a0;

@end
