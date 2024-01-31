@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (void)reset;
- (id)contents;
- (BOOL)checkIfExists;
- (void)setContents:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void).cxx_destruct;

@end
