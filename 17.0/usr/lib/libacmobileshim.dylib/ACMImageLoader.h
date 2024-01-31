@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {
    NSMutableDictionary *_imagesCache;
}

@property (readonly) NSMutableDictionary *imagesCache;

+ (id)sharedInstance;

- (void)dealloc;
- (id)imageNamed:(id)a0;

@end
