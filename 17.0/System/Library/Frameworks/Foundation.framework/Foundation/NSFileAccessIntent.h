@class NSURL;

@interface NSFileAccessIntent : NSObject {
    long long _options;
}

@property (copy) NSURL *URL;
@property (readonly) BOOL isRead;
@property (readonly) unsigned long long readingOptions;
@property (readonly) unsigned long long writingOptions;

+ (id)readingIntentWithURL:(id)a0 options:(unsigned long long)a1;
+ (id)writingIntentWithURL:(id)a0 options:(unsigned long long)a1;

- (void)dealloc;
- (id)description;

@end
