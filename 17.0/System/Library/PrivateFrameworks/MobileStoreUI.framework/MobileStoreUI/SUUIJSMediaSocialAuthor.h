@class NSString, NSArray, NSDictionary, SUUIMediaSocialAuthor;

@interface SUUIJSMediaSocialAuthor : NSObject <SUUIJSMediaSocialAuthor> {
    SUUIMediaSocialAuthor *_mediaSocialAuthor;
}

@property (readonly, nonatomic) NSString *dsId;
@property (readonly, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) NSString *entityType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *permissions;
@property (readonly, nonatomic) NSDictionary *storePlatformData;

- (void).cxx_destruct;
- (id)initWithSUUIMediaSocialAuthor:(id)a0;

@end
