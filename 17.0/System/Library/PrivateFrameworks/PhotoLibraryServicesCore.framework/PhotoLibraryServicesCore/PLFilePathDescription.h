@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithPath:(id)a0;
+ (id)descriptionWithFileURL:(id)a0;

- (id)initWithPath:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;

@end
