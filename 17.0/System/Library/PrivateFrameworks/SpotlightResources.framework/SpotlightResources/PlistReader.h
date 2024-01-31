@class NSDictionary;

@interface PlistReader : NSObject {
    NSDictionary *_plist;
}

@property (readonly, nonatomic) NSDictionary *plist;

+ (id)plistReaderWithResourcePath:(id)a0;

- (id)initWithPlist:(id)a0;
- (void).cxx_destruct;

@end
