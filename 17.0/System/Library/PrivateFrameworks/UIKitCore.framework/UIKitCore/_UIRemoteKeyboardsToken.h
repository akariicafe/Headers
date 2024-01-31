@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {
    int _identifier;
}

@property (copy, nonatomic) NSString *sceneIdentityString;

+ (id)uniqueToken;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
