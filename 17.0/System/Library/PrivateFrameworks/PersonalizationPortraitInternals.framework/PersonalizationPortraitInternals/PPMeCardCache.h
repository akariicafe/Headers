@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)init;
- (id)loadMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteMeCardCache;

@end
