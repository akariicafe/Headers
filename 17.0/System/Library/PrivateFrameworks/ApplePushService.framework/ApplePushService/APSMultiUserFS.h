@class NSString;

@interface APSMultiUserFS : NSObject {
    NSString *_systemPathCache;
}

@property (readonly) BOOL isMultiUser;

+ (id)sharedInstance;

- (id)initWithIsMultiUserMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)systemPath;

@end
