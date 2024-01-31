@class NSError, NSString;

@interface PFCloudKitErrorLogEntry : NSObject {
    NSError *_error;
    NSString *_annotation;
}

- (void)dealloc;
- (id)initWithError:(id)a0 annotation:(id)a1;

@end
